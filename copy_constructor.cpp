#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int age;
    string name;
    float score;

public:
    Student(string name = "", int age = 0, float score = 0.0f) : name(name), age(age), score(score){}; //普通构造函数
    //拷贝构造函数
    Student(const Student &stu)
    {
        this->name = stu.name;
        this->age = stu.age;
        this->score = stu.score;

        cout << "Copy constructor was called." << endl;
    }
    Student(const Student *stu)
    {
        this->name = stu->name;
        this->age = stu->age;
        this->score = stu->score;

        cout << "point Copy constructor was called." << endl;
    }
    void display()
    {
        cout << name << "的年龄是" << age << "，成绩是" << score << endl;
    }
};

int main()
{
    Student xiaoming("小明", 20, 66);
    Student stu = Student(xiaoming);
    Student stu1 = stu;
    Student stu2 = &stu1;

    xiaoming.display();
    stu1.display();
    stu2.display();
    stu.display();

    return 0;
}