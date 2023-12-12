#include<iostream>
using namespace std;
int parseHex(const char* const hexString)
{
	int decnum = 0, k = 0, x = 0;
	for (int i = 0;; i++)
	{
		k = i;
		if (int(*(hexString + i)) == 0)break;
	}//找到有几位十六进制数。
	for (int i = k-1; i >= 0; i--)
	{ 
		if(k-1==i){
			if (int(*(hexString + i)) >= 65) x = int(*(hexString + i)) - 65 + 10;
			else x = int(*(hexString + i)) -49 +1;
		}
		else {
			if (int(*(hexString + i)) >= 65) x = int(*(hexString + i)) - 65 + 10;
			else x = int(*(hexString + i)) -49 + 1;
			for (int j = 0; j < k - i - 1; j++)
			{
				x *= 16;
			}
		}
		decnum += x;
	}
	return decnum;
}
int main()
{
	const int maxlenth = 100;
	char s[maxlenth];
	cin >> s;
	cout << parseHex(s) << endl;
	return 0;
}