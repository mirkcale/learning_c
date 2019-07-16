#include <string>
#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "A constructor" << endl;
    }
    ~A()
    {
        cout << "A destructor" << endl;
    }
};

int main()
{
    string s1 = string("string1");
    string s2 = string("string2");
    const char *p1 = s1.substr(1).data();
    const char *p2 = s2.substr(1).data();

    cout << p1 << p2 << endl;

    A();
    printf("end xxx\n");
    printf("end yyy\n");

    return 0;
}