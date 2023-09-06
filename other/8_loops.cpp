#include <iostream>
using namespace std;
void loop_while()
{
  int a = 10;
  while (a < 20)
  {
    cout << "a = " << a << endl;
    a++;
  }
}

void loop_for()
{
  for (int a = 10; a < 20; a = a + 1)
  {
    cout << "a = " << a << endl;
  }
};

int main()
{
  loop_while();
  loop_for();
  // TODO循环
  return 0;
}