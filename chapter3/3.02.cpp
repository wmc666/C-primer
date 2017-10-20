/*从标准输入中一次读入一整行（识别空格键），
  一次读入一个词(不能识别空格键)*/ 
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	while(getline(cin,s))//读入一整行 
	cout<<s<<endl;
/*	
    while(cin>>s)//读入一个词 
	cout<<s<<endl;
*/		
	return 0;
 } 
