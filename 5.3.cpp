#include<iostream>
using namespace std;
class chang {   //����һ���࣬�����������
private:
	int length;
	int width;
	int height;
public:
	void action_cin()  //��Ա������ʵ�����볤��ߵĹ���
	{
		cin >> length >> width >> height;
	}
	int volume()  //��Ա������ʵ�ּ�������Ĺ���
	{
		int V;
		V = length * width * height;
		return V;
	}
	void action_show()  //��Ա������ʵ���������Ĺ���
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