/**
 * 类其实也是一种数据类型，也可以发生数据类型转换，不过这种转换只有在基类和派生类之间才有意义，
 * 并且只能将派生类赋值给基类，包括将派生类对象赋值给基类对象、将派生类指针赋值给基类指针、将派生类引用赋值给基类引用，
 * 这在 C++ 中称为向上转型（Upcasting）。相应地，将基类赋值给派生类称为向下转型（Downcasting）
 */

#include <iostream>
using namespace std;

class A
{
public:
    int a;
    A(int a) : a(a) {}
    void display()
    {
        cout << "Class A: a=" << a << endl;
    }
};

class B : public A
{
private:
    int b;

public:
    B(int a, int b) : A(a), b(b){};
    void display()
    {
        cout << "Class B: a=" << a << ", b=" << b << endl;
    }
};

int main()
{
    A a(10);
    B b(66, 99);

    // 赋值前
    a.display();
    b.display();

    cout << "-----------------------" << endl;

    // 赋值后
    a = b;
    a.display();
    b.display();

    return 0;
}