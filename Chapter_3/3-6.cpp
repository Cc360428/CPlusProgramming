#include <iostream>
using namespace std;
int x = 11;
char ch = '1';
void fun1(int ipara1);
void fun2()
{
   int i = 22222;
   double ch = 202.2;
   cout << "在fun2 中 --x = " << x << ",\t ch = " << ch << ",\ti = " << i << endl;
}

int main()
{
   cout << "在main 中 -- x = " << x << ",\t ch = " << ch << endl;
   fun1(x);
   fun2();

   return 0;
}

void fun1(int ii)
{
   int i = 21111;
   int x = 201;
   cout << "在fun1 中 --ii = " << ii << ",\t x = " << x << ",\t ch = " << ch << ",\t i = " << i << endl;
}