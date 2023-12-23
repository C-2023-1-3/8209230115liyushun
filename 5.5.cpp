#include<iostream>
using namespace std;
class Point {    //建立名为Point的类
private:
	int x;
	int y;
public:
	Point(int x_x, int x_y)  //自定义构造函数
	{
		x = x_x;
		y = x_y;
	}
	void setPoint(int i, int j)  //成员函数修改坐标值
	{
		x += i;
		y += j;
	}
	void display()   //成员函数输出坐标值 
 	{
		cout << x << '\t' << y;
	}
};
int main()
{
	Point PointA(60, 80);  //定义对象并初始化
	PointA.setPoint(5, 5);  //利用函数修改坐标值
	PointA.display();  //输出修改后的坐标值
}
