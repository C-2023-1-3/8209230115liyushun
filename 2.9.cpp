#include<iostream>
using namespace std;
int main()
{
	int a(2),sum(2),i(1);
	double b;
	for (; sum <= 100; i++)
	{
		a *= 2;
		sum = sum + a;
	}
	b = ((sum-a) * 0.8) / (i-1);
	cout << "每天平均花：" << b<<"元"<<endl;
}