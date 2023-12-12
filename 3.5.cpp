#include<iostream>
using namespace std;
int taozi(int n)
{
	int num;
	if (n == 1)
		num = 1;
	else
		num = (taozi(n - 1) + 1)*2;//利用函数的递归求出总桃子数
	return num;
}
int main()
{
	cout << taozi(10);
	return 0;
}