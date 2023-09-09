#include <iostream>
#include "Student.h"
using namespace std;

int main()
{

   Student stud;
   Student ss[2];
   int y, m, d, i;
   string name_;
   stud.printStudent();
   for (i = 0; i < 2; i++)
   {
      ss[i].printStudent();
   }

   for (i = 0; i < 2; i++)
   {
      cout << "请输入学生名字和生日，生日以\"年 月 日\" 的次序输入：";
      cin >> name_ >> y >> m >> d;
      ss[i].setStudent(name_, myDate(y, m, d));
   }
   for (i = 0; i < 2; i++)
   {
      ss[i].printStudent();
   }

   return 0;
}
/*

名字：Noname 1970/1/1
名字：Noname 1970/1/1
名字：Noname 1970/1/1
请输入学生名字和生日，生日以"年 月 日" 的次序输入：Cc 1997 06 12
请输入学生名字和生日，生日以"年 月 日" 的次序输入：holly 1998 09 18
名字：Cc 1997/6/12
名字：holly 1998/9/18
 */