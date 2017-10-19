//编写代码分别更改指针的值以及指针所指对象的值 
#include<iostream>
using namespace std;
int main()
{
	int a=10,b=100;
	int *p=&a;
	cout<<p<<endl;
	cout<<*p<<endl;
	*p=20;//改变指针所指对象的值
	cout<<*p<<endl;
	p=&b;//改变指针的值 
	cout<<p<<endl; 
	return 0;
} 
