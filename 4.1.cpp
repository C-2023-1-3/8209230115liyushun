#include<iostream>
using namespace std;
int main()
{
	int arr[10] = { 0 };
	cout << "Enter ten numbers:";
	for (int i = 0; i < 10; i++)//����ʮ����
	{
		cin >> arr[i];
	}
	int brr[10],x=0,y=0;//�ٶ���һ���µ�����brr
	brr[0] = arr[0];//��һ����һ��Ҫ����������
	for (int i = 1;i<10; i++)
	{
		for (int j = 0; j < i; j++)//�ж��Ƿ���ǰ���ֵ�ظ������Ƿ����µ�ֵ
		{
			if (arr[i] == arr[j])
			{
				x++;
				y++;
				break;
			}
		}
		if (x == 0) //���µ�ֵ����������������brr��
		{
			brr[i-y] = arr[i];
		}
		x = 0;
	}
	cout << "The distinct numbers are:";
	for (int i = 0; i < 10 - y; i++)//��������brr�е�ֵ�������
	{
		cout << brr[i] << '\x20';
	}
	return 0;
}