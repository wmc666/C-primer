/*����һ����������vector����ʹ�õ�������ÿ�����������ĺ����*/ 
#include <iostream>
#include <vector>
#include <cctype>
#include <string>
using namespace std;

int main()
{
	vector<int>v;
	int a;
	while(cin>>a)
	{
		v.push_back(a);
	}
	for(auto i=v.begin();i!=v.end()-1;++i)
	{
		cout<<*i+*(i+1)<<endl;
	}
	return 0;
}
