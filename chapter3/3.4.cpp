/*读入两个字符串，比较其结果是否相等并输出结果。
  如果不相等，输出比较大的那个字符串 */ 
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	if(s1>=s2)
	cout<<s1<<endl;
	else
	cout<<s2<<endl;
	return 0;
}
