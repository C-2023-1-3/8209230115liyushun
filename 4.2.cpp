#include<iostream>
using namespace std;
void bubble_sort(double list[],int listSize)//定义排序函数
{
	bool changed = true;
	do
	{
		changed = false;
		for(int j=0;j<listSize-1;j++)
			if(list[j]>list[j+1])
			{
				double t = list[j];
				list[j] = list[j + 1];
				list[j + 1] = t;
				changed = true;
			}
	} while (changed);
}
int main()
{
	double arr[10] = { 0 };//定义数组
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}//为数组赋初值
	bubble_sort(arr,10);//调用排序函数
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << '\t';
	}//输出排序后的数字
	return 0;
}