#include <iostream>

using namespace std;

int main()
{
   int a = 1;
   cout << a << "\n";
   for (int i = 0; i < 2; i++)
   {
      int a = 2;
      cout << a << "\n";
   }
   cout << a << "\n";
   return 0;
}