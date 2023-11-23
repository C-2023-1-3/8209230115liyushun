#include<iostream>
using namespace std;
int main()
{
	double r, h, V;
	cout << "请输入半径和锥高：" ;
	cin >> r >> h;
	const float PI = 3.14;
	V = (PI * r * r * h) / 3;
	cout << "圆锥的体积为：" << V << endl;
	return 0;
}