#include <iostream>
#include"student.h"//不要漏写此行，否则编译通不过
using namespace std;
void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex：" << sex << endl;
}
void Student::set_value(int x_num, const char* x_name, char x_sex)//增加的对数据成员赋初值的函数的成员函数
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
