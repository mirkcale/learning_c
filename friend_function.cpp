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
    friend void show(Student *student); // ��show ����Ϊ��Ԫ����
};

Student::Student(char *name, int age, float score) : name(name), age(age), score(score)
{
}

void show(Student *stu)
{
    cout << stu->name << "�������� " << stu->age << "���ɼ��� " << stu->score << endl;
}

int main()
{
    Student laoming("����", 88, 36);
    Student *aotian = new Student("��ĳ", '\0', 100);

    /**
     * ���������ַ��ͣ�˫�������ַ����ͣ������������һ���ַ�ʵ���ϴ���һ��������
     * ˫����������ַ����������ȴ��һ��ָ������������ʼ�ַ���ָ�롣
     * ������ᱻ˫����֮����ַ��Լ�һ������Ķ�����Ϊ����ַ� '\0' ��ʼ����
     */

    // Student *aotian = new Student("��ĳ", "28", 100); // ���ܱ���ͨ��
    // Student *aotian = new Student("��ĳ", '28', 100); // ���Ա���ͨ����age 12856
    cout << &laoming << endl;
    show(&laoming);
    show(aotian);
}