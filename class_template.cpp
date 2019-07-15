#include <iostream>
using namespace std;

template <class T1, class T2> // �˴�class�����滻�� `typename`
class Point
{
public:
    Point(T1 x, T2 y) : x(x), y(y) {}
    T1 getx() const
    {
        return this->x;
    }
    void setX(T1 x)
    {
        this->x = x;
    }
    T2 getY() const
    {
        return this->y;
    }
    void setY(T2 y)
    {
        this->y = y;
    }

private:
    T1 x;
    T2 y;
};

int main()
{
    Point<int, int> p1(10, 10);
    // Point p1(10, 10); error����ͨ������
    cout << "x=" << p1.getx() << ", y=" << p1.getY() << endl;

    Point<int, char*> p2(10, "����121.16��");
    cout << "x=" << p2.getx() << ", y=" << p2.getY() << endl;

    Point<char *, char *> *p3 = new Point<char *, char *>("����180��", "��γ210��");
    cout << "x=" << p3->getx() << ", y=" << p3->getY() << endl;

    return 0;
}