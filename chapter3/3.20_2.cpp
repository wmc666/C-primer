/*读入一组整数存入vector对象，将第一个元素和最后一个元素
的和输出，接着输出第二个和倒数第二个元素的和，以此类推*/ 
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
	int a=0;
	int b=v.size()-1;
	while(b>a)
	{
		cout<<v[a]+v[b]<<endl;
		++a;
		--b;
	}
	return 0;
}
