#include<iostream>
#include"mytriangle.h"
using namespace std;
bool is_valid(double side1, double side2, double side3)//�����ж������Ƿ�Ϸ��ĺ���
{
	if ((side1 + side2 > side3) && (side3 + side2 > side1) && (side1 + side3 > side2))return true;
	else return false;
}
double area(double side1, double side2, double side3)//����������ĺ���
{
	double s = (side1 + side2 + side3) / 2;
	double s_area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
	return s_area;
}
int main()
{
	double a, b, c;
	cout << "�����������ε������ߣ�";//��ȡ���߳�
	cin >> a >> b >> c;
	if (is_valid(a, b, c))cout <<"���Ϊ��" << area(a, b, c) << endl;//�жϳ��Ϸ�������������
	else cout << "���벻�Ϸ���������";//�жϳ����Ϸ���������Ϸ�
	return 0;
}