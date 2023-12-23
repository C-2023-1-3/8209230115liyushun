#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:          // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void action_cin()
	{
		cin >> hour >> minute >> sec;
	}
	void action_cout()
	{
		cout << hour << "：" << minute << "：" << sec << endl;
	}
};
int main()
{
	Time t1;           //定义t1为Time类对象
	t1.action_cin();//输入设定的时间 
	t1.action_cout();
	return 0;
}
