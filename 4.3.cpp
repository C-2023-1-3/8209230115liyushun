#include<iostream>
using namespace std;
int main()
{
	bool arr[100] = { false };//定义一个bool型数组，元素表示存物柜的开关状态
	for(int i=0;i<100;i++)//利用for循环将每个元素都设置为开，此时第一个同学已改变了
	{
		arr[i] = true;
	}
	for (int i = 2;i<=100 ; i++)//循环每个学生
	{
		for(int n=0;(i+(i+1)*n)<=100;n++)//用for循环找出各个学生要改变状态的柜子
		{
			if (arr[(i + (i + 1) * n) - 1]) { arr[(i + (i + 1) * n) - 1] = false; }
			else { arr[(i + (i + 1) * n) - 1] = true; }//用if语句将柜子改变状态
		}
	}
	for (int i = 0; i < 100; i++)//将柜子为开的柜子号码输出
	{
		if (arr[i])cout << i + 1 << '\x20';
	}
	return 0;
}