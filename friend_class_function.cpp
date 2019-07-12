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
    cout << this->name << "�������� " << this->age << "���ɼ���" << this->score << endl;
    cout << "��ͥסַ��" << addr->province << "ʡ" << addr->city << "��" << addr->district << "��" << endl;
}

Address::Address(char *province, char *city, char *district) : province(province), city(city), district(district)
{
}

int main()
{
    Student xiaoming("С��", 16, 95.5f);
    Address xiaomingHome("����", "����", "����");
    xiaoming.show(&xiaomingHome);

    Student *ao = new Student("����", 16, 80.5);
    Address *aoHome = new Address("����", "����", "����");
    ao->show(aoHome);

    return 0;
}
