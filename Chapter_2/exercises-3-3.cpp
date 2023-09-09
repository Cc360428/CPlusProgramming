#include <iostream>

using namespace std;

class A
{
public:
  int a, b;

private:
  int c, d;

public:
  int getc();
};

int A::getc()
{
  return c;
}
int main()
{
  A onea;
  cout << onea.a << "," << onea.getc() << endl;
  return 0;
}

/*
4196576,4196144
 */