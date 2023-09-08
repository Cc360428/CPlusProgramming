#include <iostream>
using namespace std;

class myDate
{
public:
  myDate();
  myDate(int, int, int);
  void setDate(int, int, int);
  void setDate(myDate);
  myDate getDate();
  void setYear(int);
  int getMonth();
  void printDate() const;

private:
  int year, month, day;
};

myDate::myDate()
{
  year = 1970, month = 1, day = 1;
};

myDate::myDate(int y, int m, int d)
{
  year = y, month = m, day = d;
}
void myDate::setDate(int y, int m, int d)
{
  year = y, month = m, day = d;
  return;
}
void myDate::setDate(myDate oneD)
{
  year = oneD.year, month = oneD.month, day = oneD.day;
  return;
}

myDate myDate::getDate()
{
  return *this;
}

void myDate::setYear(int y)
{
  year = y;
  return;
}
int myDate::getMonth()
{
  return month;
}
void myDate::printDate() const
{
  cout << year << "/" << month << "/" << day << endl;
  return;
}

/*
请输入学生名字和生日，生日以"年 月 日" 的次序输入：CC 1997 06 12
名字：CC
1997/6/12
*/