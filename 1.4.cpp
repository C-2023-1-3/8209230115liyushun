#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:"<< testUnint << endl;
	cout << "output in Oct unsigned int type:" << oct << testUnint << endl;//<<oct;
	cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//为什么结果为-2?: 答：因为65534超过了short int的范围。
	cout << "output in int type:" << static_cast<int> (testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出
	//备注：八进制的添加在了第二个cout中。
	cout << "将该实数（3.14159）转换成int为：" << static_cast<int>(3.14159) << endl;
	system("pause");
	return 0;
}
