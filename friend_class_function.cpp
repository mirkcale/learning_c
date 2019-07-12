#include <iostream>
using namespace std;

class Address;

class Student
{
private:
    char *name;
    int age;
    float score;

public:
    Student(char *name, int age, float score);
    void show(Address *addr);
};

class Address
{
private:
    char *province;
    char *city;
    char *district;

public:
    Address(char *province, char *city, char *district);
    friend void Student::show(Address *addr);
};

Student::Student(char *name, int age, float score) : name(name), age(age), score(score) {}
void Student::show(Address *addr)
{
    cout << this->name << "的年龄是 " << this->age << "，成绩是" << this->score << endl;
    cout << "家庭住址：" << addr->province << "省" << addr->city << "市" << addr->district << "区" << endl;
}

Address::Address(char *province, char *city, char *district) : province(province), city(city), district(district)
{
}

int main()
{
    Student xiaoming("小明", 16, 95.5f);
    Address xiaomingHome("陕西", "西安", "雁塔");
    xiaoming.show(&xiaomingHome);

    Student *ao = new Student("李磊", 16, 80.5);
    Address *aoHome = new Address("江西", "抚州", "崇仁");
    ao->show(aoHome);

    return 0;
}
