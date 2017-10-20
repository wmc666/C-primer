/*从cin读入一组词存入vector对象，然后把所以的词改写为大写形式。
输出改变后的结果，每个词占一行*/ 
#include<iostream>
#include<vector>
#include<string>
#include<cctype>
using namespace std;
int main()
{
	vector<string>s;
	string a;
	while(cin>>a)
	{
		s.push_back(a);
	}
	for (auto &str : s)
	{
		for (auto &c : str)
		{
			c = toupper(c);
		}
		cout<<str<<endl;
	}
	return 0;
 } 
