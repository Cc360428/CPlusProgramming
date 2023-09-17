#include <iostream>
using namespace std;
class Test
{
private:
  static int num;

public:
  Test(int n);
  void show();
};

int Test::num = 5;
Test::Test(int n)
{
  num = n;
}
void Test::show()
{
  cout << num;
}
int main()
{
  Test a(10);
  a.show();
  return 0;
}