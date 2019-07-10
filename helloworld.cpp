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
    cout << this->m_name << "��������" << this->m_age << "���ɼ���" << this->m_score << "����ǰ����" << total_counts << "��ѧ����" << endl;
}

int main(){
    //������������
    (new Student("С��", 15, 90)) -> show();
    (new Student("����", 16, 80)) -> show();
    (new Student("�Ż�", 16, 99)) -> show();
    (new Student("����", 14, 60)) -> show();
    return 0;
}