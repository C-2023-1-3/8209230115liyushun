#include<iostream>
using namespace std;
int main()
{
	int i(0), j(0), k(0), l(0);
	cout << "请输入一行字符：";
	for (char c; 1;)
	{
		cin >> noskipws;
		cin >> c;
		if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) { i++; }
		else if (c >= 49 && c <= 57) { k++; }
		else if (c == 32) { j++; }
		else if (c == '\n') { break; }
		else { l++; }
	}
	cout << "英文字母个数为" << i << endl;
	cout << "空格个数为" << j << endl;
	cout << "数字字符个数为" << k << endl;
	cout << "其它字符个数为" << l << endl;
	return 0;
}