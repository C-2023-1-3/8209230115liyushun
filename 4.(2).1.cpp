#include<iostream>
#include<cstdio>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	int x, y, z = 0, p = -1, ii;
	for (int a = 0;; a++)
	{
		x = a;
		if (int(*(s1+a)) == 0)break;
	}//将s2字符串的元素个数赋值给y
	for (int a = 0;; a++)
	{
		y = a;
		if (int(*(s2+a)) == 0)break;
	}//将s2字符串的元素个数赋值给y
	for (int i = 0; i < y; i++)
	{
		ii = i;
		for (int j = 0; j < x; j++)
		{
			if (int(*(s2+ii)) == int(*(s1+j))) { z++; }
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
	const int maxlenth = 100;
	char s_s1[maxlenth] = { 0 };
	char s_s2[maxlenth] = { 0 };
	cout << "请输入字符串s1：";
	cin.getline(s_s1, maxlenth);//输入第一个字符串
	cout << "请输入字符串s2：";
	cin.getline(s_s2, maxlenth);//输入第二个字符串
	cout << indexof(s_s1, s_s2) << endl;//调用函数
	return 0;
}