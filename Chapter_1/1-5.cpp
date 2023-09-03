#include <iostream>
using namespace std;
int main()
{
  const int cInt = 30;
  int oneInt = 50;
  int &ref = oneInt;
  const int &rc1 = cInt;
  const int &rc2 = oneInt;
  const int &rc3 = ref;
  int dInt = ref;
  int eInt = cInt;
  const int gInt = oneInt;
  int &refl = ref;
  const int jInt = cInt;
  const int &mInt = rc1;
  const int nInt = rc2;
  cout << "OK" << endl;
  int &r2 = (int &)rc1;
  int &r3 = (int &)cInt;
  cout << r2 << endl;
  cout << r3 << endl;
  return 0;
}