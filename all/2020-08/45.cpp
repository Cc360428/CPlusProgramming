#include <iostream>

using namespace std;

class A
{
public:
  A()
  {
    cout << "测量广场" << endl;
  }
  virtual ~A() { cout << "是否扩建？" << endl; }
};

class B : public A
{
public:
  int width, high;
  B()
  {
    width = 40;
    high = 20;
    cout << "初始面积为：" << width * high << endl;
  }
  ~B()
  {
    if (width * high < 10000)
      cout << "不超过最大面积值";
  }
};

int main()
{
  A *p = new B();
  delete p;
  return 0;
}

/*
测量广场
初始面积为：800
不超过最大面积值是否扩建？
*/