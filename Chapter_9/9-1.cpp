#include <iostream>
template <typename T>
T abs(T x)
{
   return x < 0 ? -x : x;
}

using namespace std;
int main()
{
   int n = 5;
   int m = 10;
   double d = -5;
   float f = 3.2;
   cout << n << "n = 绝对值是:" << abs(n) << endl;
   cout << m << "m = 绝对值是:" << abs(m) << endl;
   cout << d << "d = 绝对值是:" << abs(d) << endl;
   cout << f << "f = 绝对值是:" << abs(f) << endl;
   return 0;
}