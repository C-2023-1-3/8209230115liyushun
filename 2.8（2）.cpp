#include<iostream>
using namespace std;
int main()
{
	float a;
	cout << "请输入一个数：";
	cin >> a;
	if (a < 0)
	{
		cout << "该数没有平方根";
	}
	else
	{
		float m(a), n;
		for (;;)
		{
			n = (m + a / m) / 2;
			if (m - n > -1e-10 && m - n < 1e-10) { break; }
			m = n;
		}
		cout << "该数的平方根为:" << n << endl;
	}
	return 0;
}