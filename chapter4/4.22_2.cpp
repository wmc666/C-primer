//if°æ±¾ 
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
		if(i>90)
		cout<<"highpass ";
		else if(i>75)
		cout<<"pass ";
		else if(i>60)
		cout<<"lowpass ";
		else
		cout<<"fail ";
	}
	return 0;
}
