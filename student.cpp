#include <iostream>
#include"student.h"//��Ҫ©д���У��������ͨ����
using namespace std;
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex��" << sex << endl;
}
void Student::set_value(int x_num, const char* x_name, char x_sex)//���ӵĶ����ݳ�Ա����ֵ�ĺ����ĳ�Ա����
{
    num = x_num;
    for (int i = 0; i < 20; i++)
    {
        name[i] = *(x_name+i);
    }
    sex = x_sex;
}
Student::Student(int xx_num, const char* xx_name, char xx_sex)
{
    num = xx_num;
    for (int i = 0; i < 20; i++)
    {
        name[i] = *(xx_name + i);
    }
    sex = xx_sex;
}
Student::Student()
{

}
