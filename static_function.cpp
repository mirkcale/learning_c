#include <iostream>
using namespace std;

class Student
{
private:
    char *name;
    int age;
    float score;
    static int total;
    static float points;

public:
    Student(char *name, int age, float score);
    void show();
    static int getTotal();
    static float getPoints();
};

int Student::total = 0;
float Student::points = 0.0;

Student::Student(char *name, int age, float score) : name(name), age(age), score(score)
{
    total++;
    points += score;
}
void Student::show()
{
    cout << this->name << "的年龄是" << this->age << ",成绩是" << this->score << endl;
}
int Student::getTotal()
{
    return total;
}
float Student::getPoints()
{
    return points;
}

int main(){
    (new Student("小明", 15, 90.6)) -> show();
    (new Student("李磊", 16, 80.5)) -> show();
    (new Student("张华", 16, 99.0)) -> show();
    (new Student("王康", 14, 60.8)) -> show();
    int total = Student::getTotal();
    float points = Student::getPoints();
    cout<<"当前共有"<<total<<"名学生，总成绩是"<<points<<"，平均分是"<<points/total<<endl;
    return 0;
}