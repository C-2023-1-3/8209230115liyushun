#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:          // ���ݳ�ԱΪ���õ�
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
		cout << hour << "��" << minute << "��" << sec << endl;
	}
};
int main()
{
	Time t1;           //����t1ΪTime�����
	t1.action_cin();//�����趨��ʱ�� 
	t1.action_cout();
	return 0;
}
