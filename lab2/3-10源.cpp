#include<iostream>
using namespace std;
int mmm(int a, int b)
{
	while (b != 0)
	{
		int c = a % b;
		a = b;
		b = c;
	}
	return a;
}
int nnn(int a, int b)
{
	return a / mmm(a, b) * b;
}
int main()
{
	int m, n;
	cout << "请输入两个整数:" << endl;
	cin >> m >> n;
	cout << "最大公约数为：" << mmm(m, n) << endl;
	cout << "最小公倍数为:" << nnn(m, n) << endl;
	return 0;
}