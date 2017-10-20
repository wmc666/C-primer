//从标准输入中读入多个字符串并将他们连接在一起，空格隔开，输出大字符串
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1,s2;
	while(cin>>s1)
	s2 +=  s1 + " " ;
	cout<<s2<<endl;
	return 0;
}
