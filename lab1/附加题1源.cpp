#include<iostream>
using namespace std;
int main()
{
	long long a = 1;
	long long b = 1;
	long long c;
	cout << "第一个月:" << a << "对兔子" << endl;
	cout << "第二个月:" << b << "对兔子" << endl;
	for (int month = 3;month <= 20;month++)
	{
		c = a + b;
		cout << "第" << month << "个月" << c << "对兔子" << endl;
		a = b;
		b = c;
	}
	return 0;
}