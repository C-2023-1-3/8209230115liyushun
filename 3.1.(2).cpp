#include<iostream>
using namespace std;
void maxandmin(int a, int b, int& m, int& n)//���������β�
{
	m = (a < b) ? a : b;
	for (;; m--)
	{
		if ((a % m == 0) && (b % m == 0))break;
	}//����forѭ��������Լ����
	for (int i = 1;; i++)
	{
		if ((i % a == 0) && (i % b == 0))break;
		n = i + 1;
	}//����forѭ�������С��������
}
int main()
{
	int m, n, x, y;
	cout << "������������Ȼ����";
	cin >> m >> n;//����������
	if ((m == 0) || (n == 0))cout << "û�����Լ������С��������";//��Ϊ0û�����Լ������С���������ʵ���һ���������
	else
	{
		maxandmin(m, n, x, y);
		cout << "���Լ��Ϊ��" << x << endl;//������Լ��
		cout << "��С������Ϊ��" << y << endl;//�����С������
	}
	return 0;
}