#include<iostream>
using namespace std;
int main()
{
	bool arr[100] = { false };//����һ��bool�����飬Ԫ�ر�ʾ�����Ŀ���״̬
	for(int i=0;i<100;i++)//����forѭ����ÿ��Ԫ�ض�����Ϊ������ʱ��һ��ͬѧ�Ѹı���
	{
		arr[i] = true;
	}
	for (int i = 2;i<=100 ; i++)//ѭ��ÿ��ѧ��
	{
		for(int n=0;(i+(i+1)*n)<=100;n++)//��forѭ���ҳ�����ѧ��Ҫ�ı�״̬�Ĺ���
		{
			if (arr[(i + (i + 1) * n) - 1]) { arr[(i + (i + 1) * n) - 1] = false; }
			else { arr[(i + (i + 1) * n) - 1] = true; }//��if��佫���Ӹı�״̬
		}
	}
	for (int i = 0; i < 100; i++)//������Ϊ���Ĺ��Ӻ������
	{
		if (arr[i])cout << i + 1 << '\x20';
	}
	return 0;
}