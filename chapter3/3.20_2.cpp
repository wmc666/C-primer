/*����һ����������vector���󣬽���һ��Ԫ�غ����һ��Ԫ��
�ĺ��������������ڶ����͵����ڶ���Ԫ�صĺͣ��Դ�����*/ 
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
