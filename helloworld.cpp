#include <iostream>
using namespace std;

class Student
{
    //private:
private:
    static int total_counts;
    char *m_name;
    int m_age;
    float m_score;

public:
    Student(char *name, int age, float score);
    void show();
};

int Student::total_counts = 0;

Student::Student(char *name, int age, float score) : m_name(name), m_age(age), m_score(score)
{
    total_counts++;
}
void Student::show()
{
    cout << this->m_name << "的年龄是" << this->m_age << "，成绩是" << this->m_score << "（当前共有" << total_counts << "名学生）" << endl;
}

int main(){
    //创建匿名对象
    (new Student("小明", 15, 90)) -> show();
    (new Student("李磊", 16, 80)) -> show();
    (new Student("张华", 16, 99)) -> show();
    (new Student("王康", 14, 60)) -> show();
    return 0;
}