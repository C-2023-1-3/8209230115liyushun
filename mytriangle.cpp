#include<iostream>
#include"mytriangle.h"
using namespace std;
bool is_valid(double side1, double side2, double side3)//定义判断输入是否合法的函数
{
	if ((side1 + side2 > side3) && (side3 + side2 > side1) && (side1 + side3 > side2))return true;
	else return false;
}
double area(double side1, double side2, double side3)//定义求面积的函数
{
	double s = (side1 + side2 + side3) / 2;
	double s_area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
	return s_area;
}
int main()
{
	double a, b, c;
	cout << "请输入三角形的三条边：";//读取三边长
	cin >> a >> b >> c;
	if (is_valid(a, b, c))cout <<"面积为：" << area(a, b, c) << endl;//判断出合法，求面积并输出
	else cout << "输入不合法，请重试";//判断出不合法，输出不合法
	return 0;
}