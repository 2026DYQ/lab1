#include<iostream>
using namespace std;
int main()
{
	int n, num1, num2 = 0;
	cin >> n;
	num1 = n;
	while (num1 > 0)
	{
		num2 = num2 * 10 + num1 % 10;
		num1 /= 10;
	}
	if (num2 == n)
		cout << n << "是回文数" << endl;
	else
		cout << n << "不是回文数" << endl;
	return 0;
}