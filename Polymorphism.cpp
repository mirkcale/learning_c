#include <iostream>
using namespace std;

class People
{
public:
    People(char *name, int age) : name(name), age(age){};
    // void display()
    virtual void display()
    {
        cout << name << "����" << age << "���ˣ��Ǹ���ҵ����" << endl;
    }

private:
    char *name;
    int age;
};

class Teacher : public People
{
private:
    char *name;
    int age;
    int students;

public:
    Teacher(char *name, int age, int students) : name(name), age(age), students(students), People(name, age){};
    void display()
    {
        cout << this->name << "����" << this->age << "���ˣ��Ǹ���ʦ������" << this->students << "ѧ��" << endl;
    }
};

int main(){
    People *wanggang = new People("����", 33);
    wanggang->display();

    wanggang = new Teacher("�Ը�", 45, 87);
    wanggang ->display();

    return 0;

}

// �����ָ��Ҳ����ָ�����������

/**
 * ͨ������ָ��ֻ�ܷ���������ĳ�Ա���������ǲ��ܷ���������ĳ�Ա������
 * ͨ���ڻ������ `virtual` �ؼ��֣�����ʹ�û���ָ����Է���������ĳ�Ա������ �Ƚ����`virtual` ��39���������
 */