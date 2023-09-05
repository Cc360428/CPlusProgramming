#include <iostream>
#include <cstring>
using namespace std;
int main()
{
  string s1 = "2020040737";
  string s2 = "c语言程序设计";
  s2[1] = '+';
  s2[2] = s2[1];
  s2[3] = s2[4] = '.';
  s1 = s1.substr(6, 5);
  s1.swap(s2);
  string str = s1.append(s2);
  cout << "str= " << str << endl;
  cout << "字符集共含有" << str.length() << "个字符" << endl;
}