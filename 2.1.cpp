#include<iostream>
using namespace std;
int main()
{
	char x;
	int a;
	cin >> x;
	if (x >= 97 && x <= 122) 
	{
	     cout << char(x-32) << endl; 
	}
	else 
	{
		a = x + 1; cout  << a << endl; 
	}
	return 0;
}