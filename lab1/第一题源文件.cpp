#include<iostream>
using namespace std;
int main()
{
	double a;
	cin >> a;
	double b = 0;
	if (a <= 10)
	{
		b = a * 0.1;
	}
	else if(a<=20)
	{
		b = 10 * 0.1 + (a - 10) * 0.075;
	}
	else if (a <= 40)
	{
		b = 10 * 0.1 + 10 * 0.075 + (a - 20) * 0.05;
	}
	else if (a <= 60)
	{
		b = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + (a - 40) * 0.03;
	}
	else if (a <= 100)
	{
		b = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + (a - 60) * 0.015;
	}
	else
	{
		b = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + 40 * 0.015 + (a- 100 )*0.01;
	}
	cout << "½±½ð:" << b << endl;
	return 0;
}