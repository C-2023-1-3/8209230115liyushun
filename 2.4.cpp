#include<iostream>
using namespace std;
int main()
{
	double a, b ,c;
	cout << "请输入参与运算的两个数:";
	cin >> a >> b;
	c = a + b;
	cout << "加法结果为：" << c<<endl;
	c = a - b;
	cout << "减法结果为" << c << endl;
	c = a * b;
	cout << "乘法结果为" << c << endl;
	if (b == 0)
	{
		cout << "除数为零，不可除" << endl;
	}
	else
	{
		c = a / b;
		cout << "除法结果为" << c << endl;
	}
	if (b == 0)
	{
		cout << "不可取余" << endl;
	}
	else
	{

		c = int(a) % int(b);//因为取余必须为整数，所以强制转换double为int
		cout << "取余结果为" << c << endl;
	}

}//运算符非法是什么意思()未考虑