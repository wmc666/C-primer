/*创建一个含有10个整数的vector对象，使用迭代器将所有元素
 的值都变成原来的两倍。输出vector对象的内容*/ 
#include <iostream>
#include <vector>
#include <cctype>
#include <string>
using namespace std;

int main()
{
	vector<int>v{1,2,3,4,5,6,7,8,9,10};
	for(auto i=v.begin();i!=v.end();i++)
	{
		*i=*i *2;
	}
	for(auto a:v)
	{
		cout<<a<<endl;
	}
	return 0;
}
