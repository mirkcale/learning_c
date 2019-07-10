#include <iostream>
using namespace std;
/**
 * 函数开头的 const 用来修饰函数的返回值，表示返回值是 const 类型，也就是不能被修改，例如const char * getname()。
 * 函数头部的结尾加上 const 表示常成员函数，这种函数只能读取成员变量的值，而不能修改成员变量的值，例如char * getname() const。
 */
class Student
{
private:
    char *name;
    int age;
    float score;

public:
    Student(char *name, int age, float score);
    void show();
    char *getname() const;
    int getage() const;
    float getscore() const;
};

Student::Student(char *name, int age, float score) : name(name), age(age), score(score) {}

void Student::show()
{
    cout << this->name << "的年龄是" << this->age << "，成绩是" << this->score << endl;
    cout << this->getname() << "的年龄是" << this->getage() << "，成绩是" << this->getscore() << endl;
}
// 定义常成员函数
char *Student::getname() const
{
    return this->name;
}
int Student::getage() const
{
    // return this->age += 1; 这条语句不通过，因为试图在常成员函数中改变成员变量
    return this->age;
}
float Student::getscore() const
{
    return this->score;
}

int main()
{
    Student lilei("李雷", 18, 99);
    lilei.show();
    return 0;
}