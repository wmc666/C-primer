//输入两个数，打印出这两个整数所指定范围内的所以整数 while循环 
#include<iostream>
using namespace std;
int main()
{
	int a=0,b=0;
	cout<<"enter number"<<endl;
	cin>>a;
	cout<<"other number"<<endl;
	cin>>b;
    while(a>b)
    {
    	cout<<b<<endl;
    	b++;
	}
	while(a<b)
	{
		cout<<a<<endl;
		a++;
	}
	cout<<a<<endl;
	return 0;
}
