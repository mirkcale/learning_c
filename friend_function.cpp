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
    friend void show(Student *student); // 讲show 声明为友元函数
};

Student::Student(char *name, int age, float score) : name(name), age(age), score(score)
{
}

void show(Student *stu)
{
    cout << stu->name << "的年龄是 " << stu->age << "，成绩是 " << stu->score << endl;
}

int main()
{
    Student laoming("老明", 88, 36);
    Student *aotian = new Student("龙某", '\0', 100);

    /**
     * 单引号是字符型，双引号是字符串型，单引号引起的一个字符实际上代表一个整数。
     * 双引号引起的字符串，代表的却是一个指向无名数组起始字符的指针。
     * 该数组会被双引号之间的字符以及一个额外的二进制为零的字符 '\0' 初始化。
     */

    // Student *aotian = new Student("龙某", "28", 100); // 不能编译通过
    // Student *aotian = new Student("龙某", '28', 100); // 可以编译通过，age 12856
    cout << &laoming << endl;
    show(&laoming);
    show(aotian);
}