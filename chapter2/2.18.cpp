//��д����ֱ����ָ���ֵ�Լ�ָ����ָ�����ֵ 
#include<iostream>
using namespace std;
int main()
{
	int a=10,b=100;
	int *p=&a;
	cout<<p<<endl;
	cout<<*p<<endl;
	*p=20;//�ı�ָ����ָ�����ֵ
	cout<<*p<<endl;
	p=&b;//�ı�ָ���ֵ 
	cout<<p<<endl; 
	return 0;
} 
