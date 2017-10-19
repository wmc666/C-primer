//从cin读入一组整数并把它们存入一个vector对象 
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	vector<string> v;
	int i;
	while (cin >> i)
	{
		v.push_back(i);
	}
	return 0;
}
