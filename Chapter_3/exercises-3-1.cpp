#include <iostream>
using namespace std;
class point
{
  float x;

public:
  void f(float a)
  {
    x = a;
  }
  // ____max(point &a, point &b);
  float friend max(point &a, point &b);
};
float max(point &a, point &b)
{
  return (a.x > b.x) ? a.x : b.x;
}
int main()
{
  point a, b;
  a.f(2.2);
  b.f(3.3);
  cout << max(a, b) << endl;
  return 0;
}