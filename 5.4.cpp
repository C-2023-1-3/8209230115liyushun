#include<iostream>
using namespace std;
class student {     //定义学生这个类
private:
	char idnum[20];//学号用字符串表示更好
	int grade;
public:
	student(const char* x_idnum, int x_grade)//因为指向常量，所以用常量指针！！！
	{
		for (int i = 0; i < 20; i++)
		{
			idnum[i] = *(x_idnum + i);
		}
		grade = x_grade;
	}
	static void max(student* p);//用静态成员函数
};
void student::max(student* p)//定义函数max,用指向对象的指针作函数参数。
{
	for (int i = 0; i < 5; i++)
	{
		int k = 0;
		for (int j = 0; j < 5 ; j++)
		{
			if ((*(p + i)).grade > (*(p + j)).grade)k++;
		}
		if (k == 4)
		{
			 cout<<(*(p + i)).idnum;//利用for循环找出最高成绩者并输出其学号
		}
	}
}
int main()
{
	student arr_class[5] = { student("8209230101",85),
		                     student("8209230102",83),
		                     student("8209230103",94),
		                     student("8209230104",84),
		                     student("8209230105",999) };//建立对象数组
	student::max(arr_class);
	return 0;
}