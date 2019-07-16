#include <iostream>
using namespace std;
int main()
{
    int x, y;
    freopen("input.dat", "r", stdin); // 代表标准输入
    cin >> x >> y;
    cout << "x=" << x << "，y:" << y << endl;
    freopen("./dist/test_out.txt", "w", stdout); //将标准输出重定向到 test.txt文件
    if (y == 0)                                  //除数为0则输出错误信息
        cerr << "error." << endl;
    else
        cout << x / y;
    return 0;
}