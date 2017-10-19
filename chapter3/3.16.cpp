//下列的vector对象包含多少个元素，编写程序输出具体内容 
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	vector<int>v1;
	vector<int>v2(10);
	vector<int>v3(10,42);
	vector<int>v4{10};
	vector<int>v5{10,42};
	vector<string>v6{10};
	vector<string>v7{10,"hi"};
	for(auto a:v1)
	cout<< a <<" ";
	cout<<endl;
	for(auto a:v2)
	cout<< a <<" ";
	cout<<endl;
	for(auto a:v3)
	cout<< a <<" ";
	cout<<endl;
	for(auto a:v4)
	cout<< a <<" ";
	cout<<endl;	
	for(auto a:v5)
	cout<< a <<" ";
	cout<<endl;	
	for(auto a:v6)
	cout<< a <<" ";
	cout<<endl;
	for(auto a:v7)
	cout<< a <<" ";
	return 0;
}
