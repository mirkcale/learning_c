#include <iostream>
using namespace std;
int main()
{
    int x, y;
    freopen("input.dat", "r", stdin); // �����׼����
    cin >> x >> y;
    cout << "x=" << x << "��y:" << y << endl;
    freopen("./dist/test_out.txt", "w", stdout); //����׼����ض��� test.txt�ļ�
    if (y == 0)                                  //����Ϊ0�����������Ϣ
        cerr << "error." << endl;
    else
        cout << x / y;
    return 0;
}