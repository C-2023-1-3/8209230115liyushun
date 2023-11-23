#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cout << "请输入三角形的三个边:";
	cin >> a >> b >> c;
	if(a+b<=c||a+c<=b||b+c<=a)
	{
		cout << "不能构成三角形" << endl;
	}
	else
	{
		d = a + b + c;
		cout << "周长为："  << d << endl;
		if(a==b||a==c||b==c)
		{
			cout << "是等腰三角形" << endl;
		}
		else
		{
			cout << "不是等腰三角形" << endl;
		}
	}
	return 0;
}//总结：发现或者可以连用