#include <iostream>
using namespace std;

class f
{
private:
  int x, y;

public:
  void f1()
  {
    x = 10;
    y = 10;
  }

  void print()
  {
    cout << x << "," << y << endl;
  }
};

int main()
{
  f a;
  a.f1();
  a.print();
  return 0;
}