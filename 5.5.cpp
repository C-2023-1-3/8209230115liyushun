#include<iostream>
using namespace std;
class Point {    //������ΪPoint����
private:
	int x;
	int y;
public:
	Point(int x_x, int x_y)  //�Զ��幹�캯��
	{
		x = x_x;
		y = x_y;
	}
	void setPoint(int i, int j)  //��Ա�����޸�����ֵ
	{
		x += i;
		y += j;
	}
	void display()   //��Ա�����������ֵ 
 	{
		cout << x << '\t' << y;
	}
};
int main()
{
	Point PointA(60, 80);  //������󲢳�ʼ��
	PointA.setPoint(5, 5);  //���ú����޸�����ֵ
	PointA.display();  //����޸ĺ������ֵ
}
