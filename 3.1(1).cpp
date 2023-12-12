#include<iostream>
using namespace std;
int maxgongyueshu(int a, int b)//定义求公约数的函数
{
	int z;
	z=(a<b) ? a : b;
	for(;;z--)//利用for循环求最大公约数
	{
		if ((a % z == 0) && (b % z == 0))break;
	}
	return z;
}
int main()
{
	cout << "请输入两个自然数：";
	int m, n;
	cin >> m >> n;//输入两个数
	if (m == 0 || n == 0)cout << "不存在最大公约数。"<<endl;//0不存在最大公约数，故单列出来一种情况
	else cout << "两个数的最大公约数为：" << maxgongyueshu(m, n) << endl;//输出最大公约数
	return 0;
}