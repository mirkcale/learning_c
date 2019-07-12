/**
 * ����ʵҲ��һ���������ͣ�Ҳ���Է�����������ת������������ת��ֻ���ڻ����������֮��������壬
 * ����ֻ�ܽ������ำֵ�����࣬���������������ֵ��������󡢽�������ָ�븳ֵ������ָ�롢�����������ø�ֵ���������ã�
 * ���� C++ �г�Ϊ����ת�ͣ�Upcasting������Ӧ�أ������ำֵ���������Ϊ����ת�ͣ�Downcasting��
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

    // ��ֵǰ
    a.display();
    b.display();

    cout << "-----------------------" << endl;

    // ��ֵ��
    a = b;
    a.display();
    b.display();

    return 0;
}