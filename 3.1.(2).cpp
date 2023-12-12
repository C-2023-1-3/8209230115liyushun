#include<iostream>
using namespace std;
void maxandmin(int a, int b, int& m, int& n)//利用引用形参
{
	m = (a < b) ? a : b;
	for (;; m--)
	{
		if ((a % m == 0) && (b % m == 0))break;
	}//利用for循环求出最大公约数。
	for (int i = 1;; i++)
	{
		if ((i % a == 0) && (i % b == 0))break;
		n = i + 1;
	}//利用for循环求出最小公倍数。
}
int main()
{
	int m, n, x, y;
	cout << "请输入两个自然数：";
	cin >> m >> n;//输入两个数
	if ((m == 0) || (n == 0))cout << "没有最大公约数和最小公倍数。";//因为0没有最大公约数与最小公倍数，故单列一个情况出来
	else
	{
		maxandmin(m, n, x, y);
		cout << "最大公约数为：" << x << endl;//输出最大公约数
		cout << "最小公倍数为：" << y << endl;//输出最小公倍数
	}
	return 0;
}