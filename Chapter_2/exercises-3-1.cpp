#include <iostream>

using namespace std;

class Test
{
private:
  int x, y;

public:
  Test(int i, int j)
  {
    x = i;
    y = j;
  }
  int getx()
  {
    return x;
  }
  int gety()
  {
    return y;
  }
};

int main()
{
  Test mt(10, 20);
  cout << mt.getx() << mt.gety() << endl;
  return 0;
}