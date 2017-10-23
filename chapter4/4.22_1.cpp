//条件运算符版本 
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
	for(auto i:v)
	{
		cout<<
		((i>90) ? "highpass " :
			(i>75) ? "psaa " :
				(i>60) ? "lowpass " : "fail ");
	}
	return 0;
}
