#include <iostream>
using namespace std;
class point
{
  float x, y;

public:
  void f(float a, float b)
  {
    x = a;
    y = b;
  }
  void friend print(point a);
};
void print(point a)
{
  cout << a.x << "," << a.y;
}
int main()
{
  point a;
  a.f(3.0, 5.0);
  print(a);
  return 0;
}