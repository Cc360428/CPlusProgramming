#include <iostream>
using namespace std;

int main()
{
   int i = 10;
   char ch = '1';
   cout << "在main中 -- i = " << i << ",\t ch = " << ch << endl;
   {
      int i = 20;
      char ch = '2';
      cout << "在外层快 -- i = " << i << ",\t ch = " << ch << endl;
      if (i > 0)
      {
         double i = 30.3;
         int ch = 33;
         cout << "在内层快 -- i = " << i << ",\t ch = " << ch << endl;
      }
      cout << "在外层快 -- i = " << i << ",\t ch = " << ch << endl;
   }
   cout << "在main中 -- i = " << i << ",\t ch = " << ch << endl;
   return 0;
}
/* 

在main中 -- i = 10,      ch = 1
在外层快 -- i = 20,      ch = 2
在内层快 -- i = 30.3,    ch = 33
在外层快 -- i = 20,      ch = 2
在main中 -- i = 10,      ch = 1

 */