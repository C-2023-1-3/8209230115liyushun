#include<iostream>
using namespace std;
class student {     //����ѧ�������
private:
	char idnum[20];//ѧ�����ַ�����ʾ����
	int grade;
public:
	student(const char* x_idnum, int x_grade)//��Ϊָ�����������ó���ָ�룡����
	{
		for (int i = 0; i < 20; i++)
		{
			idnum[i] = *(x_idnum + i);
		}
		grade = x_grade;
	}
	static void max(student* p);//�þ�̬��Ա����
};
void student::max(student* p)//���庯��max,��ָ������ָ��������������
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
			 cout<<(*(p + i)).idnum;//����forѭ���ҳ���߳ɼ��߲������ѧ��
		}
	}
}
int main()
{
	student arr_class[5] = { student("8209230101",85),
		                     student("8209230102",83),
		                     student("8209230103",94),
		                     student("8209230104",84),
		                     student("8209230105",999) };//������������
	student::max(arr_class);
	return 0;
}