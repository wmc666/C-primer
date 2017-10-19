//从cin读入字符串并把它们存入一个vector对象 
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	vector<string> v;
	string i;
	while (cin >> i)
	{
		v.push_back(i);
	}
	return 0;
}
