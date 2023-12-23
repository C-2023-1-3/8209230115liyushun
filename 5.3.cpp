#include<iostream>
using namespace std;
class chang {   //定义一个类，长方柱这个类
private:
	int length;
	int width;
	int height;
public:
	void action_cin()  //成员函数，实现输入长宽高的功能
	{
		cin >> length >> width >> height;
	}
	int volume()  //成员函数，实现计算体积的功能
	{
		int V;
		V = length * width * height;
		return V;
	}
	void action_show()  //成员函数，实现输出体积的功能
	{
		cout << volume() << endl;
	}
};
int main()
{
	chang chang1, chang2, chang3;
	chang1.action_cin();
	chang2.action_cin();
	chang3.action_cin();
	chang1.volume(); 
	chang2.volume(); 
	chang3.volume();
	chang1.action_show();
	chang2.action_show();
	chang3.action_show();
	return 0;
}