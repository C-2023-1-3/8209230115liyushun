#include<iostream>
using namespace std;
bool is_prime(int a);//声明函数
bool is_prime(int a)//定义函数判断一个数是否是素数
{
	int b = 0;
	for(int i=2;i<a;i++)//通过for循环找出除1和它本身的因数，若有，则不是素数
	{
		if (a % i == 0)
		{
			b = i;
			break; 
		}
	}
	if (b)return false;
	if (a <= 1) return false;//0和1都不是素数，故单列一种情况
	else return true;
}
int main()
{
	int num1 = 0;
	for(int i=0;num1<200;i++)//利用for循环找出前两百的素数
	{
		if (is_prime(i)) 
		{
			num1++;
			cout << i << '\t';
			if (num1 % 10 == 0)cout << endl;//做到每行十个输出
		}
	}
	return 0;
}