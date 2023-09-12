#include <iostream>
#include "Student.h"
using namespace std;

int main()
{

   Student stud;
   stud.printStudent();
   stud.setName("111");
   stud.printStudent();
   Student *sponter[2] = {new Student, &stud};
   Student sy[2] = {Student(), stud};
   for (int i = 0; i < 2; i++)
   {
      sponter[i]->printStudent();
   }

   for (int i = 0; i < 2; i++)
   {
      sy[i].printStudent();
   }
   stud.setName("222");
   for (int i = 0; i < 2; i++)
   {
      sponter[i]->printStudent();
   }

   sponter[0]->setName("333");
   sponter[1]->setName("444");
   for (int i = 0; i < 2; i++)
   {
      sponter[i]->printStudent();
   }

   stud.printStudent();

   for (int i = 0; i < 2; i++)
   {
      sy[i].printStudent();
   }
   return 0;
}

/*
名字：Noname 1970/1/1
名字：111 1970/1/1
名字：Noname 1970/1/1
名字：111 1970/1/1
名字：Noname 1970/1/1
名字：111 1970/1/1
名字：Noname 1970/1/1
名字：222 1970/1/1
名字：333 1970/1/1
名字：444 1970/1/1
名字：444 1970/1/1
名字：Noname 1970/1/1
名字：111 1970/1/1
 */