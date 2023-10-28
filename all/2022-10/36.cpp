#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int score;

public:
    Student(string n)
    {
        name = n;
    };
    void setScore(int s ){
        score = s;
    };
    int getScrore(){
        return score;
    }
    int averageScore(Student stu){
        return (stu.getScrore()+score)/2;
    }
};
int main()
{
    Student stu1("tom1"),stu2("jerry");
    stu1.setScore(100);
    stu2.setScore(80);
    cout << stu1.averageScore(stu2)<< endl;
    return 0;
}