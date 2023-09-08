#include <iostream>

using namespace std;

int oneX = 10;
int oneY = 20;
int &refValue(int &x)
{
  return x;
};

// 引用作为函数值返回
int main()
{
  refValue(oneX) = 30;
  cout << "oneX = " << oneX << endl;
  refValue(oneY) = 40;
  cout << "oneY = " << oneY << endl;
  return 0;
}

/*
oneX = 30
oneY = 40
 */