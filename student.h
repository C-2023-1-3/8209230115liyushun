#pragma once
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	void set_value(int x_num,const char* x_name,char x_sex);
	Student(int xx_num, const char* xx_name, char xx_sex);
	Student();
private:
	int num;
	char name[20];
	char sex;
};
