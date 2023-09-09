#include <iostream>
#include "2-1.h"

using namespace std;
// Class Student
class Student
{
public:
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
   cout << "名字：" << name << endl;
   birthday.printDate();
   return;
}