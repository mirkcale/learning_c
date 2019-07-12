#include <iostream>
using namespace std;

/**
 * ```
 * C++�е� struct �� class ������ͨ�õģ�Ψ�м���ϸ�ڲ�ͬ��
 *  - ʹ�� class ʱ�����еĳ�ԱĬ�϶��� private ���Եģ���ʹ�� struct ʱ���ṹ���еĳ�ԱĬ�϶��� public ���Եġ�
 *  - class �̳�Ĭ���� private �̳У��� struct �̳�Ĭ���� public �̳У���C++�̳���������һ�»ὲ��̳У���
 *  - class ����ʹ��ģ�壬�� struct ���ܣ���ģ�塢�ַ������쳣��һ�»ὲ��ģ�壩��
 * ```
 * 
 * �ڱ�дC++����ʱ��ǿ�ҽ���ʹ�� class �������࣬��ʹ�� struct ������ṹ�壬���������������ȷ��
 */
struct Student
{
    Student(char *name, int age, float score);
    void show();

    char *name;
    int age;
    float score;
};

Student::Student(char *name, int age, float score) : name(name), age(age), score(score){};
void Student::show()
{
    cout << name << "��������" << age << "���ɼ���" << score << endl;
    cout << this->name << "��������" << this->age << "���ɼ���" << this->score << endl;
}

int main()
{
    Student xiaoming("С��", 16, 93.5f);
    xiaoming.show();
    Student *xiaohong = new Student("С��", 18, 99.3f);
    xiaohong->show();

    return 0;
}