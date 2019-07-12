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
        cout << this->name << "�������� " << this->age << "���ɼ��� " << this->score << endl;
        cout << "��ͥסַ��" << addr->province << "ʡ" << addr->city << "��" << addr->district << "��" << endl;
    };
    Student(char *name, int age, float score) : name(name), age(age), score(score){};
};

int main()
{
    Student xiaoming("С��", 20, 98.6f);
    Address xiaomingHome("����", "����", "����");
    xiaoming.show(&xiaomingHome);

    Student *xiaohong = new Student("xiaohong", 22, 99.9f);
    Address *xiaohongHome = new Address("�ӱ�", "��ˮ", "�ҳ�");
    xiaohong->show(xiaohongHome);

    return 0;
}