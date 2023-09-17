#include <iostream>
using namespace std;
class A
{
  int a, b;

public:
  A(int a1, int b1)
  {
    a = a1;
    b = b1;
  }
};
int main()
{
  A *p;
  p = new A(4, 5);
  return 0;
}