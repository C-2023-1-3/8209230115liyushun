#include<iostream>
using namespace std;
void bubble_sort(int list[], int listSize)//����������
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
	cout << "��ֱ��������������Ԫ��:";
	cin >> i;//����Ԫ�ظ���
	int* p = new int[i];
	for (int j = 0; j < i; j++)
	{
		cin >> *(p + j);//��������Ԫ��
	}
	cout << p << '\t' << *p << endl;//�۲�ָ����ָ��ָ�������
	bubble_sort(p, i);
	cout << "���������Ԫ��Ϊ:";
	for (int j = 0; j < i; j++)
	{
		cout << *(p + j) << '\t';//��ָ�뷽ʽ�������Ԫ��
	}
	if (p != NULL)
	{
		delete[]p;
		p = NULL;
	}//�ͷ������ڴ档
	return 0;
}