#include<iostream>
using namespace std;
void bubble_sort(double list[],int listSize)//����������
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
	double arr[10] = { 0 };//��������
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}//Ϊ���鸳��ֵ
	bubble_sort(arr,10);//����������
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << '\t';
	}//�������������
	return 0;
}