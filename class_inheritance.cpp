#include <iostream>
using namespace std;

class People
{
private:
    char *name;
    int age;

public:
    void setname(char *name)
    {
        name = name;
    }
    void setage(int age)
    {
        age = age;
    }
    char *getname()
    {
        return name;
    }
    int getage()
    {
        return age;
    }
};

class Student : public People
{
private:
    float score;

public:
    void setscore(float score)
    {
        score = score;
    }
    float getscore()
    {
        return score;
    }
};

int main()
{
    Student xiaoming;
    xiaoming.setname("С��");
    xiaoming.setage(16);
    xiaoming.setscore(95.4f);

    cout << xiaoming.getname() << "�������� " << xiaoming.getage() << "���ɼ��� " << xiaoming.getscore() << endl;

    return 0;
}
