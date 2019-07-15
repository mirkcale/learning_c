#include <iostream>
using namespace std;

class People
{
public:
    People(char *name, int age) : name(name), age(age){};
    // void display()
    virtual void display()
    {
        cout << name << "今年" << age << "岁了，是个无业游民。" << endl;
    }

private:
    char *name;
    int age;
};

class Teacher : public People
{
private:
    char *name;
    int age;
    int students;

public:
    Teacher(char *name, int age, int students) : name(name), age(age), students(students), People(name, age){};
    void display()
    {
        cout << this->name << "今年" << this->age << "岁了，是个老师。教了" << this->students << "学生" << endl;
    }
};

int main(){
    People *wanggang = new People("王刚", 33);
    wanggang->display();

    wanggang = new Teacher("赵刚", 45, 87);
    wanggang ->display();

    return 0;

}

// 基类的指针也可以指向派生类对象

/**
 * 通过基类指针只能访问派生类的成员变量，但是不能访问派生类的成员函数。
 * 通过在基类添加 `virtual` 关键字，可以使得基类指针可以访问派生类的成员函数， 比较添加`virtual` 后39行输出差异
 */