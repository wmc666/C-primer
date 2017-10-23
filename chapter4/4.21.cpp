//使用条件运算符从vector<int>中找到哪些元素的值是奇数，然后将奇数值翻倍 
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v;
	int a=0;
	while(cin>>a)
	{
		v.push_back(a);
	}
	for(auto &i:v)
	{
		cout<<((i%2==0) ? i : i*2)<<" ";
	}
	return 0;
}
