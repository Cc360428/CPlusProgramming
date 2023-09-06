#include <iostream>
using namespace std;

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

void test()
{
  const int LENGTHS = 10;
  const int WIDTHS = 5;
  const char NEWLINES = '\n';
  int area;
  area = LENGTHS * WIDTHS;
  cout << area;
  cout << NEWLINES;
}
int main()
{
  int area;
  area = LENGTH * WIDTH;
  cout << area;
  cout << NEWLINE;
  test();
  return 0;
}