//ʹ�������������vector<int>���ҵ���ЩԪ�ص�ֵ��������Ȼ������ֵ���� 
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
	for(auto &i:v)
	{
		cout<<((i%2==0) ? i : i*2)<<" ";
	}
	return 0;
}
