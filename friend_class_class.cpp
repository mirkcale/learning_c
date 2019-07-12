#include <iostream>
using namespace std;

class Address
{
private:
    char *province;
    char *city;
    char *district;

public:
    Address(char *province, char *city, char *district) : province(province), city(city), district(district){};
    friend class Student;
};

class Student
{
private:
    char *name;
    int age;
    float score;

public:
    void show(Address *addr)
    {
        cout << this->name << "的年龄是 " << this->age << "，成绩是 " << this->score << endl;
        cout << "家庭住址：" << addr->province << "省" << addr->city << "市" << addr->district << "区" << endl;
    };
    Student(char *name, int age, float score) : name(name), age(age), score(score){};
};

int main()
{
    Student xiaoming("小明", 20, 98.6f);
    Address xiaomingHome("陕西", "西安", "雁塔");
    xiaoming.show(&xiaomingHome);

    Student *xiaohong = new Student("xiaohong", 22, 99.9f);
    Address *xiaohongHome = new Address("河北", "衡水", "桃城");
    xiaohong->show(xiaohongHome);

    return 0;
}