#include <iostream>

using namespace std;

class Test
{
private:
  int x, y;

public:
  void func(int i, int j)
  {
    x = i;
    y = j;
  }
  void show()
  {
    cout << "x=" << x;
    if (y > 0)
      cout << ",y=" << y;

    cout << endl;
  }
};

int main()
{
  Test a;

  a.func(1, 10);
  a.show();
  a.func(2, 0);
  a.show();
  return 0;
}