#include <iostream>
#include <fstream>

using namespace std;

// input 5 8 10 15 20 25 30 40 50 60 70 80 90 100 110 120
int main()
{
   int x, count, sum = 0;
   freopen("input.dat", "r", stdin);
   for (count = 0; count < 10; count++)
   {
      cin >> x;
      sum += x;
   }
   cout << "前 10 个整数的平均值 = " << 1.0 * sum / 10 << endl;
}
