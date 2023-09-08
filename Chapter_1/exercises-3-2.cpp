#include <iostream>

using namespace std;

int main()
{
  const int x = 5, y = 6;
  const int *p = &x;
  // ___________ 输出6
  p = &y;
  cout << *p << endl;
  return 0;
}
