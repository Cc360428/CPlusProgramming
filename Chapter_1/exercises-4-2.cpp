#include <iostream>

using namespace std;

int main()
{
  int oneInt = 1;
  int &ref = oneInt;
  ref = 2;
  cout << "oneInt=" << oneInt << ",ref= " << ref << endl;
  int *p = &ref;
  *p = 3;
  cout << "ref=" << ref << ",p地址是= " << p << "p 的值是：" << *p << endl;
  return 0;
}

/*

oneInt=2,ref= 2
ref=3,p地址是= 0x7ffcc41ee2acp 的值是：3

*/