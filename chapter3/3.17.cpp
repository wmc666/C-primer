/*��cin����һ��ʴ���vector����Ȼ������ԵĴʸ�дΪ��д��ʽ��
����ı��Ľ����ÿ����ռһ��*/ 
#include<iostream>
#include<vector>
#include<string>
#include<cctype>
using namespace std;
int main()
{
	vector<string>s;
	string a;
	while(cin>>a)
	{
		s.push_back(a);
	}
	for (auto &str : s)
	{
		for (auto &c : str)
		{
			c = toupper(c);
		}
		cout<<str<<endl;
	}
	return 0;
 } 
