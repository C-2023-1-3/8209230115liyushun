#include<iostream>
#include<cstdio>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int x, y, z = 0, p = -1 ,ii;
	for (int a = 0;; a++)
	{
		x = a;
		if (int(s1[a]) == 0)break;
	}//��s1�����и�ֵ��Ԫ�ظ�����ֵ��x
	for (int a = 0;; a++)
	{
		y = a;
		if (int(s2[a]) == 0)break;
	}//��s2�����и�ֵ��Ԫ�ظ�����ֵ��y
	for (int i = 0; i < y; i++)
	{
		ii = i;
		for (int j = 0; j < x; j++)
		{
			if (int(s2[ii]) == int(s1[j])) { z++; }
			ii++;
		}
		if (z == x)
		{
			p = i;
			break;
		}
		else z = 0;
	}//��������forѭ��Ƕ���ҵ�s1��s2�е��±겢��ֵ��p,����p��ֵΪ-1
	return p;
}
int main()
{
#define maxlenth 100
	char s1[maxlenth];
	cout << "Enter the first string:";
	cin.getline(s1, maxlenth);//�����һ���ַ���
	char s2[maxlenth];
	cout << "Enter the second string:";
	cin.getline(s2, maxlenth);//����ڶ����ַ���
	cout << "indexOf(" << '\"' << s1 << '\"' << ","<<'\"' << s2 << '\"'<<")is";
	cout << indexOf(s1, s2);//���ú���
	return 0;
}