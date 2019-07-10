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
    cout << name << "��������" << age << "���ɼ���" << this->score << endl;
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
    const Student xiaoming("С��", 17, 93.5);
    // xiaoming.show();  //error
    cout << xiaoming.getname() << "��������" << xiaoming.getage() << "���ɼ���" << xiaoming.getscore() << endl;

    const Student *lilei = new Student("����", 16, 80.5);
    // lilei -> show();  //error
    cout << lilei->getname() << "��������" << lilei->getage() << "���ɼ���" << lilei->getscore() << endl;
    return 0;
}

// demo�� xiaoming��lilei �ֱ��ǳ������Լ�������ָ�룬���Ƕ�ֻ�ܵ��� const ��Ա������