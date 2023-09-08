#include <iostream>

using namespace std;
// 默认值
// 第一个参数有默认值，后面的没有错误
// 第一个参数没有默认值，后面可有默认值，同理第二个
void func(int a = 11, int b = 22, int c = 33)
{
  cout << "a=" << a << ",b=" << b << ",c=" << c << endl;
}

int main()
{
  func();
  func(55);
  func(77, 99);
  func(8, 88, 888);
  return 0;
}
/*
a=11,b=22,c=33
a=55,b=22,c=33
a=77,b=99,c=33
a=8,b=88,c=888
 */