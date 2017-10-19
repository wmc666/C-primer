//读入一个包含标点符号的字符串，将标点符号去除后输出字符串剩余的部分 
#include<iostream>
#include<string>
using namespace std;
int main()
{   
    string s;
    cin>>s; 
    for(auto &c : s)
      if(!ispunct(c))
        cout<< c ;
	return 0;
}
