#pragma once
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void set_value(int x_num,const char* x_name,char x_sex);
	Student(int xx_num, const char* xx_name, char xx_sex);
	Student();
private:
	int num;
	char name[20];
	char sex;
};
