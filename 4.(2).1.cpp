#include<iostream>
#include<cstdio>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	int x, y, z = 0, p = -1, ii;
	for (int a = 0;; a++)
	{
		x = a;
		if (int(*(s1+a)) == 0)break;
	}//��s2�ַ�����Ԫ�ظ�����ֵ��y
	for (int a = 0;; a++)
	{
		y = a;
		if (int(*(s2+a)) == 0)break;
	}//��s2�ַ�����Ԫ�ظ�����ֵ��y
	for (int i = 0; i < y; i++)
	{
		ii = i;
		for (int j = 0; j < x; j++)
		{
			if (int(*(s2+ii)) == int(*(s1+j))) { z++; }
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
	const int maxlenth = 100;
	char s_s1[maxlenth] = { 0 };
	char s_s2[maxlenth] = { 0 };
	cout << "�������ַ���s1��";
	cin.getline(s_s1, maxlenth);//�����һ���ַ���
	cout << "�������ַ���s2��";
	cin.getline(s_s2, maxlenth);//����ڶ����ַ���
	cout << indexof(s_s1, s_s2) << endl;//���ú���
	return 0;
}