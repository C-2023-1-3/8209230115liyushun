#include<iostream>
using namespace std;
bool is_prime(int a);//��������
bool is_prime(int a)//���庯���ж�һ�����Ƿ�������
{
	int b = 0;
	for(int i=2;i<a;i++)//ͨ��forѭ���ҳ���1������������������У���������
	{
		if (a % i == 0)
		{
			b = i;
			break; 
		}
	}
	if (b)return false;
	if (a <= 1) return false;//0��1�������������ʵ���һ�����
	else return true;
}
int main()
{
	int num1 = 0;
	for(int i=0;num1<200;i++)//����forѭ���ҳ�ǰ���ٵ�����
	{
		if (is_prime(i)) 
		{
			num1++;
			cout << i << '\t';
			if (num1 % 10 == 0)cout << endl;//����ÿ��ʮ�����
		}
	}
	return 0;
}