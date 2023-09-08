#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  string str;
  if (str.empty())
    cout << "str is NULL Length =" << str.length() << endl;
  else
    cout << "str is not NULL" << endl;
  str = str.append("abcdefg");
  cout << "str is" << str << ",size=" << str.size() << endl;
  const char *p = str.c_str();
  cout << "p = " << p << endl;
  cout << "find:" << str.find("de", 0) << endl; // 从 第 0 个开始查找
  cout << "find:" << str.find("de", 4) << endl;
  string str1 = str.insert(4, "123");
  cout << "str1 = " << str1 << endl;

  // 18446744073709551615 ~= 2^64 - 1
  int isFindError = 18446744073709551615;

  if (isFindError == -1)
  {
    cout << "true" << endl;
  }
  else
  {
    cout << "false" << endl;
  }
  return 0;
}

/*
str is NULL Length =0
str isabcdefg,size=7
p = abcdefg
find:3
find:18446744073709551615
str1 = abcd123efg
true
*/