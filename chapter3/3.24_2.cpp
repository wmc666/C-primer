/*����һ����������vector���󣬽���һ��Ԫ�غ����һ��Ԫ�صĺ������
��������ڶ����͵����ڶ���Ԫ�صĺͣ��Դ����ƣ�ʹ�õ�����*/ 
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
