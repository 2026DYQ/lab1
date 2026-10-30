#include <iostream>
using namespace std;
int getPower(int x, int y)
{
    if (y < 0)
    {
        return 0;
    }
    if (y == 0)
    {
        return 1;
    }
    return x * getPower(x, y - 1);
}
double getPower(double x, int y)
{
    if (y == 0)
    {
        return 1.0;
    }
    if (y < 0)
    {
        return 1.0 / getPower(x, -y);
    }
    return x * getPower(x, y - 1);
}

int main()
{
    int a, m;
    double b;

    cout << "请输入整数底数a：";
    cin >> a;
    cout << "请输入实型底数b：";
    cin >> b;
    cout << "请输入整数指数m：";
    cin >> m;
    int resInt = getPower(a, m);                                                                              
    double resDouble = getPower(b, m);

    cout << "\n整型版本 a^m = " << resInt << endl;
    cout << "实型版本 b^m = " << resDouble << endl;

    // 思考题
    // 把a强制转成double，调用double版本的getPower
    double resA_Double = getPower(static_cast<double>(a), m);
    cout << "将a转为double调用实型版本，a^m = " << resA_Double << endl;
    return 0;
}
