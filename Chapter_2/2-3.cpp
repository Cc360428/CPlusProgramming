#include <iostream>
#include "2-2.h"
using namespace std;
int main()
{

   Student s;
   int y, m, d;
   string name_;
   cout << "请输入学生名字和生日，生日以\"年 月 日\" 的次序输入：";
   cin >> name_ >> y >> m >> d;
   s.setStudent(name_, myDate(y, m, d));
   s.printStudent();
   return 0;
}