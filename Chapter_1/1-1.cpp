#include <iostream>
#include <string>
using namespace std;
int mian()
{
  int oneInt1, oneInt2;
  char strArray[20];
  string str;
  double oneDouble;
  char oneChar = 'a';
  cout << "输入两个整型值 一个字符串和一个浮点值";
  cout << "以空格 Tab或《Enter》键分隔：" << endl;
  cin >> oneInt1 >> oneInt2 >> oneChar >> strArray >> oneDouble;
  str = strArray;
  cout << "输入的字符串是" << endl
       << "两个整型值分别是：\t" << oneInt1 << "和 \t" << oneInt2 << endl
       << "字符串是：\t\t" << oneChar << "\n"
       << "浮点型是：\t\t" << oneDouble << endl;
  return 0;
}