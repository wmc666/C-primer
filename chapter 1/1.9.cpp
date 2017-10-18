//编写程序，使用while循环将50到100的整数相加
#include<iostream>
using namespace std;
int main()
{
	int a=50,n=0;
	while(a<101)
	{
		n+= a;
		a++;
	}
	cout<<n;
	return 0;
} 
