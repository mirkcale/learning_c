#include <iostream>
using namespace std;

/**
 * ```
 * C++中的 struct 和 class 基本是通用的，唯有几个细节不同：
 *  - 使用 class 时，类中的成员默认都是 private 属性的；而使用 struct 时，结构体中的成员默认都是 public 属性的。
 *  - class 继承默认是 private 继承，而 struct 继承默认是 public 继承（《C++继承与派生》一章会讲解继承）。
 *  - class 可以使用模板，而 struct 不能（《模板、字符串和异常》一章会讲解模板）。
 * ```
 * 
 * 在编写C++代码时，强烈建议使用 class 来定义类，而使用 struct 来定义结构体，这样做语义更加明确。
 */
struct Student
{
    Student(char *name, int age, float score);
    void show();

    char *name;
    int age;
    float score;
};

Student::Student(char *name, int age, float score) : name(name), age(age), score(score){};
void Student::show()
{
    cout << name << "的年龄是" << age << "，成绩是" << score << endl;
    cout << this->name << "的年龄是" << this->age << "，成绩是" << this->score << endl;
}

int main()
{
    Student xiaoming("小明", 16, 93.5f);
    xiaoming.show();
    Student *xiaohong = new Student("小红", 18, 99.3f);
    xiaohong->show();

    return 0;
}