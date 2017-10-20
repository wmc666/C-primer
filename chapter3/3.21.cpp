/*下列的vector对象包含多少个元素，编写程序输出具体内容 
使用迭代器*/
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
	for(auto a=v1.begin();a!=v1.end();++a)
	cout<< *a <<" ";
	cout<<endl;
	for(auto a=v2.begin();a!=v2.end();++a)
	cout<< *a <<" ";
	cout<<endl;
	for(auto a=v3.begin();a!=v3.end();++a)
	cout<< *a <<" ";
	cout<<endl;
	for(auto a=v4.begin();a!=v4.end();++a)
	cout<< *a <<" ";
	cout<<endl;	
	for(auto a=v5.begin();a!=v5.end();++a)
	cout<< *a <<" ";
	cout<<endl;	
	for(auto a=v6.begin();a!=v6.end();++a)
	cout<< *a <<" ";
	cout<<endl;
	for(auto a=v7.begin();a!=v7.end();++a)
	cout<< *a <<" ";
	return 0;
}
