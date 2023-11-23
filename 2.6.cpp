#include<iostream>
using namespace std;
int main()
{
	int a, b,c(2), d(1);
	cout << "请输入两个正整数：";
	cin >> a >> b;
	for(;;c++)
	{
		if (c == a || c == b)
		{
			if (a % b != 0&&b % a != 0)
			{
				cout << "没有大于1的最大公约数" << endl;
				break;
			}
			else 
			{
				cout << "最大公约数为："<<((a>b)?b:a)<<endl;
				break;
			}
		}
		if(a%c==0&&b%c==0)
		{
			cout << "最大公约数为：" << c<<endl;
			break;
		}
	}
	for(;;d++)
	{
		if (d % a == 0 && d % b == 0)break;
	}
	cout << "最小公倍数为：" << d << endl;
}