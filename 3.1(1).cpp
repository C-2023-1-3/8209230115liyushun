#include<iostream>
using namespace std;
int maxgongyueshu(int a, int b)//������Լ���ĺ���
{
	int z;
	z=(a<b) ? a : b;
	for(;;z--)//����forѭ�������Լ��
	{
		if ((a % z == 0) && (b % z == 0))break;
	}
	return z;
}
int main()
{
	cout << "������������Ȼ����";
	int m, n;
	cin >> m >> n;//����������
	if (m == 0 || n == 0)cout << "���������Լ����"<<endl;//0���������Լ�����ʵ��г���һ�����
	else cout << "�����������Լ��Ϊ��" << maxgongyueshu(m, n) << endl;//������Լ��
	return 0;
}