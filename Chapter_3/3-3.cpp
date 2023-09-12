#include <iostream>
using namespace std;

static int glos = 100;
void f()
{
   int a = 1;
   static int fs = 1;
   cout << "在f()中:a(自动)=" << a << " fs(静态)= " << fs << " glos(静态)=" << glos << endl;
   a += 2;
   fs += 2;
   glos += 10;
   cout << "在f()中:a(自动)=" << a << " fs(静态)= " << fs << " glos(静态)=" << glos << endl;
   
}

int main()
{
   static int ms = 10;
   for (int i = 0; i < 3; i++)
      f();

   // cout << "fs=" << fs << endl; // identifier "fs" is undefined

   cout << "ms=" << ms << endl;
   cout << "glos=" << glos << endl;
   return 0;
}