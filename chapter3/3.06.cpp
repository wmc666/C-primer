//使用范围for语句将字符串内的所以字符用X代替 
#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string s;
	cin>>s;
	for(auto c:s)
	{
		c='X';
		cout<<c;
	}
	return 0;
}
