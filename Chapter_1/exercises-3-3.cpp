#include <iostream>

using namespace std;
double pi = 3.14159;
int main()
{
  double r;
  cout << "输入r:" << endl;
  cin >> r;
  double l = 2.0 * pi * r;
  double s = pi * r * r;
  cout << "\n 周长是：" << l << endl;
  cout << "面积是：" << s << endl;
  return 0;
}
/*

输入r:
33

 周长是：207.345
面积是：3421.19

 */
