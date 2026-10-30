#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n)
{
	if (n <= 1)
		return false;
	if (n == 2)
		return true;
	if (n % 2 == 0)
		return false;
	for (int i = 3;i <= sqrt(n);i += 2)
	{
		if (n % i == 0)
			return false;
	}
	return true;
	}
int main()
{
	int num;
	cout << "请输入一个整数：" << endl;
	cin >> num;
	if (isprime(num))
	{
		cout << "您输入的整数是质数" << endl;
     }
	else
	{
		cout << "您输入的整数不是质数" << endl;
	}
	return 0;
}


