//为while循环写一个条件，使其从标准输入中读入整数，遇到42时停止
#include<iostream>
using namespace std;
int main()
{
	int a=0;
	while(cin>>a&&a!=42)
	{
		;
	}
	return 0;
 } 
