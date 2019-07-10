#include <iostream>
using namespace std;

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

Student::Student(char *name, int age, float score) : name(name), age(age), score(score)
{
}
void Student::show()
{
    cout << name << "的年龄是" << age << "，成绩是" << this->score << endl;
}
char *Student::getname() const
{
    return name;
}
int Student::getage() const
{
    return age;
}
float Student::getscore() const
{
    return this->score;
}

int main()
{
    const Student xiaoming("小明", 17, 93.5);
    // xiaoming.show();  //error
    cout << xiaoming.getname() << "的年龄是" << xiaoming.getage() << "，成绩是" << xiaoming.getscore() << endl;

    const Student *lilei = new Student("李磊", 16, 80.5);
    // lilei -> show();  //error
    cout << lilei->getname() << "的年龄是" << lilei->getage() << "，成绩是" << lilei->getscore() << endl;
    return 0;
}

// demo中 xiaoming、lilei 分别是常对象以及常对象指针，它们都只能调用 const 成员函数。