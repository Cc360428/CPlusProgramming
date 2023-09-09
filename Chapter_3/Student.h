#include <iostream>
#include "myDate.h"

using namespace std;
// Class Student
class Student
{
public:
   Student();
   Student(string);
   void setStudent(string, myDate);
   void setName(string);
   string getName();
   void setBirthday(myDate);
   myDate getBirthday();
   void printStudent() const;

private:
   string name;
   myDate birthday;
};

Student::Student() : name("Noname"), birthday(myDate()) {}
Student::Student(string n) : name(n), birthday(myDate()) {}

void Student::setStudent(string s, myDate d)
{
   name = s;
   birthday.setDate(d);
   return;
}

void Student::setName(string s)
{
   name = s;
   return;
}
string Student::getName()
{
   return name;
}
void Student::setBirthday(myDate d)
{
   birthday.setDate(d);
   return;
}

myDate Student::getBirthday()
{
   return birthday;
}
void Student::printStudent() const
{
   cout << "名字：" << name;
   birthday.printDate();
   return;
}