//使用迭代器，实现划分分数段的程序 
#include <iostream>
#include <vector>
#include <cctype>
#include <string>
using namespace std;

int main()
{
	vector<unsigned>v(11,0);
	unsigned a;
	while (cin>>a)
	{
		if(a<=100)
		++*(v.begin()+a/10) ;
	}
	for(auto n:v)
	{
		cout<<n<<" ";
	}
	return 0;
}
