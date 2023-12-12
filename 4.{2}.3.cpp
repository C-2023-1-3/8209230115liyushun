#include<iostream>
using namespace std;
void bubble_sort(int list[], int listSize)//定义排序函数
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize - 1; j++)
			if (list[j] > list[j + 1])
			{
				int t = list[j];
				list[j] = list[j + 1];
				list[j + 1] = t;
				changed = true;
			}
	} while (changed);
}
int main()
{
	int i;
	cout << "请分别输入个数及数组元素:";
	cin >> i;//输入元素个数
	int* p = new int[i];
	for (int j = 0; j < i; j++)
	{
		cin >> *(p + j);//输入数组元素
	}
	cout << p << '\t' << *p << endl;//观察指针与指针指向的内容
	bubble_sort(p, i);
	cout << "排序后数组元素为:";
	for (int j = 0; j < i; j++)
	{
		cout << *(p + j) << '\t';//用指针方式输出数组元素
	}
	if (p != NULL)
	{
		delete[]p;
		p = NULL;
	}//释放数组内存。
	return 0;
}