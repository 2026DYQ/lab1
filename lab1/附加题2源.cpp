#include<iostream>
using namespace std;
int main()
{
	int peach = 1;
	for (int i = 1;i <= 9;i++)
	{
		peach = (peach + 1) * 2;
	}
	cout << "第一天一共摘了" << peach << "个桃子" << endl;
	return 0;
}