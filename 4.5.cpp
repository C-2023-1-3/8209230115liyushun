#include<iostream>
#include<cstdio>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int x, y, z = 0, p = -1 ,ii;
	for (int a = 0;; a++)
	{
		x = a;
		if (int(s1[a]) == 0)break;
	}//将s1数组中赋值的元素个数赋值给x
	for (int a = 0;; a++)
	{
		y = a;
		if (int(s2[a]) == 0)break;
	}//将s2数组中赋值的元素个数赋值给y
	for (int i = 0; i < y; i++)
	{
		ii = i;
		for (int j = 0; j < x; j++)
		{
			if (int(s2[ii]) == int(s1[j])) { z++; }
			ii++;
		}
		if (z == x)
		{
			p = i;
			break;
		}
		else z = 0;
	}//利用两个for循环嵌套找到s1在s2中的下标并赋值给p,否则p的值为-1
	return p;
}
int main()
{
#define maxlenth 100
	char s1[maxlenth];
	cout << "Enter the first string:";
	cin.getline(s1, maxlenth);//读入第一个字符串
	char s2[maxlenth];
	cout << "Enter the second string:";
	cin.getline(s2, maxlenth);//读入第二个字符串
	cout << "indexOf(" << '\"' << s1 << '\"' << ","<<'\"' << s2 << '\"'<<")is";
	cout << indexOf(s1, s2);//调用函数
	return 0;
}