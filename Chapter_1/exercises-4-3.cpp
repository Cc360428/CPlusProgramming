#include <iostream>
#include <cmath>
using namespace std;
int func(int);
int main()
{

  for (int a = 0; a < 3; a++)
    func(a);
  return 0;
}

int func(int a)
{
  int b = 0, c = 1;
  b++, c++;
  //       b^2
  cout << a + pow(double(b), 2) + c << endl;
}

/*
3
4
5
*/