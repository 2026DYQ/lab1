#include<iostream>
using namespace std;
short int divide(unsigned short int a, unsigned short int b)
{
	if (b == 0)
	{
		return -1;
	}
	return static_cast<short int>(a / b);
}
int main()
{
	unsigned short int x, y;
	cout << "请输入两个 unsigned short整数：";
	cin >> x >> y;
	short int result = divide(x, y);
	if (result ==
		-1)
	{
		cout << "除数为0" << endl;
	}
	else
	{
		cout << x << "/" << y << "=" << result << endl;
	}
	return 0;

	}
