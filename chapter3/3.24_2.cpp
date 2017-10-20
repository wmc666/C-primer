/*读入一组整数存入vector对象，将第一个元素和最后一个元素的和输出，
接着输出第二个和倒数第二个元素的和，以此类推，使用迭代器*/ 
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
	auto m=v.begin();
	auto n=v.end()-1;
	while(m<n)
	{
		cout<<*m +*n<<endl;
		++m;
		--n;
	}
	return 0;
}
