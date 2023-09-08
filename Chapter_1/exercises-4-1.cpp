#include <iostream>

using namespace std;
class A
{
public:
  int func(double);
  int func(int);
};
int A::func(double x)
{
  return (int)x / 2;
};
int A::func(int x)
{
  return x * 2;
};

int main()
{
  A a;
  // s = 3+4
  int s = a.func(6.0) + a.func(2);
  cout << s << endl;
  return 0;
}
// 7
