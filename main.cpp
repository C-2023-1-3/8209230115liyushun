#include <iostream>             //��������ͷ�ļ���������
#include "student.h"
int main()
{
	Student stud;                //�������
	Student stud1(007,"tcg",'m');
	stud.set_value(005, "yjl", 'm');
	stud.display();              //ִ��stud�����display����
	return 0;
}