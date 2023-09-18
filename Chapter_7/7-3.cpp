#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   int x, count, sum = 0;
   freopen("input.dat", "r", stdin);
   for (count = 0; count < 10; count++)
   {
      cin >> x;
      if (cin.eof())
         break;
      else
         sum += x;
   }
   cout << "前 10 个整数的平均值 = " << 1.0 * sum / 10 << endl;
}
