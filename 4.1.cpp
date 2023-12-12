#include<iostream>
using namespace std;
int main()
{
	int arr[10] = { 0 };
	cout << "Enter ten numbers:";
	for (int i = 0; i < 10; i++)//读入十个数
	{
		cin >> arr[i];
	}
	int brr[10],x=0,y=0;//再定义一个新的数组brr
	brr[0] = arr[0];//第一个数一定要存入新数组
	for (int i = 1;i<10; i++)
	{
		for (int j = 0; j < i; j++)//判断是否与前面的值重复，即是否是新的值
		{
			if (arr[i] == arr[j])
			{
				x++;
				y++;
				break;
			}
		}
		if (x == 0) //是新的值，将他存入新数组brr中
		{
			brr[i-y] = arr[i];
		}
		x = 0;
	}
	cout << "The distinct numbers are:";
	for (int i = 0; i < 10 - y; i++)//将新数组brr中的值依次输出
	{
		cout << brr[i] << '\x20';
	}
	return 0;
}