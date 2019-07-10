#include <iostream>
using namespace std;
/**
 * ������ͷ�� const �������κ����ķ���ֵ����ʾ����ֵ�� const ���ͣ�Ҳ���ǲ��ܱ��޸ģ�����const char * getname()��
 * ����ͷ���Ľ�β���� const ��ʾ����Ա���������ֺ���ֻ�ܶ�ȡ��Ա������ֵ���������޸ĳ�Ա������ֵ������char * getname() const��
 */
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

Student::Student(char *name, int age, float score) : name(name), age(age), score(score) {}

void Student::show()
{
    cout << this->name << "��������" << this->age << "���ɼ���" << this->score << endl;
    cout << this->getname() << "��������" << this->getage() << "���ɼ���" << this->getscore() << endl;
}
// ���峣��Ա����
char *Student::getname() const
{
    return this->name;
}
int Student::getage() const
{
    // return this->age += 1; ������䲻ͨ������Ϊ��ͼ�ڳ���Ա�����иı��Ա����
    return this->age;
}
float Student::getscore() const
{
    return this->score;
}

int main()
{
    Student lilei("����", 18, 99);
    lilei.show();
    return 0;
}