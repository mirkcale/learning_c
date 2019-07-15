#include <iostream>
using namespace std;

template <typename T>
void Swap(T *a, T *b)
{
    T temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    //���� int ������ֵ
    int n1 = 100;
    int n2 = 200;
    Swap(&n1, &n2);
    cout << n1 << ", " << n2 << endl;

    //���� float ������ֵ
    float f1 = 12.5, f2 = 56.93;
    Swap(&f1, &f2);
    cout << f1 << ", " << f2 << endl;

    //���� char ������ֵ
    char c1 = 'A', c2 = 'B';
    Swap(&c1, &c2);
    cout << c1 << ", " << c2 << endl;

    //���� bool ������ֵ
    bool b1 = false, b2 = true;
    Swap(&b1, &b2);
    cout << b1 << ", " << b2 << endl;

    return 0;
}