/*����һ����������vector���󣬽�ÿ�����������ĺ����*/ 
#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	int s;
    while (cin >> s)
	{
		v.push_back(s);
	}
    for(int i=0;i<v.size()-1;++i)
    {
    	cout<<v[i]+v[i+1]<<endl;
	}
	return 0;
}
