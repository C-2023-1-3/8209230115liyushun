#include<iostream>
using namespace std;
void merge(const int list1[],int size1,const int list2[],int size2,int list3[])
{
	int x = 0, y = 0;
	int k = 0;
	for(int i=0;i<size1+size2;i++)
	{
		if(list1[x]<list2[y])//循环size1+size2次，进行size1+size2次比较
		{
			if ((x < size1)&&(k==0))//防止出现未定义的数组元素。
			{
				list3[i] = list1[x];
			}
			x++;
			if (x == size1) { x--; list3[i + 1] = list2[y]; y++; k++; }
		}
		else 
		{
			if ((y < size2)&&(k==0)) 
			{
				list3[i] = list2[y];
			}	
			y++;
			if (y == size2) { y--; list3[i + 1] = list1[x]; x++; k++;}
		}
	}
}
int main()
{
	int a, b,list1[80],list2[80];
	cout << "Enter list1:";
	cin >> a; //输入元素数
	for (int i = 0; i < a; i++)
	{
		cin >> list1[i];//输入第一个排列好的数组
	}
	cout << "Enter list2:";
	cin >> b;//输入元素数
	for (int i = 0; i < b; i++)
	{
		cin >> list2[i];//输入第二个排列好的数组
	}
	int list3[80];
	merge(list1, a, list2, b, list3);
	cout << "The merged list is ";
	for (int i = 0; i < a + b; i++)//输出排好的数组
	{
		cout << list3[i] << '\x20';
	}
	return 0;
}