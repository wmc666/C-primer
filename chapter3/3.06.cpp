//ʹ�÷�Χfor��佫�ַ����ڵ������ַ���X���� 
#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string s;
	cin>>s;
	for(auto c:s)
	{
		c='X';
		cout<<c;
	}
	return 0;
}
