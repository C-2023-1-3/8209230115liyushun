#include<iostream>
#include<cstdio>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i = 0; i < 26; i++)//��26����ĸѭ��
	{
		for (int j = 0;; j++)
		{
			if ((int(s[j]) == i + 97) || (int(s[j] == i + 65)))
			{
				counts[i]++;
			}
			if (int(s[j]) == 0)break;
		}
	}
}
int main()
{
	const int maxlenth = 50;
	char s_s[maxlenth];
	char ss[27] = "abcdefghijklmnopqrstuvwxyz";
	int s_counts[26] = { 0 };
	cout << "Enter a string:";
	cin.getline(s_s,maxlenth);//�����ַ���
	count(s_s, s_counts);//���ú���
	for (int i = 0; i < 26; i++)//��ʾ����ĸ����Ĵ���
	{
		if (s_counts[i] != 0)cout << ss[i] << ":" << s_counts[i] << " times" << endl;
	}
}