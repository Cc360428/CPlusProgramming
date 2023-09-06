#include <iostream>
#include <limits>

using namespace std;

int main()
{
  cout << "type: \t\t"
       << "************size**************" << endl;
  cout << "bool: \t\t"
       << "所占字节数：" << sizeof(bool);
  cout << "\t最大值：" << (numeric_limits<bool>::max)();
  cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;
  cout << "char: \t\t"
       << "所占字节数：" << sizeof(char);
  cout << "\t最大值：" << (numeric_limits<char>::max)();
  cout << "\t\t最小值：" << (numeric_limits<char>::min)() << endl;
  cout << "signed char: \t"
       << "所占字节数：" << sizeof(signed char);
  cout << "\t最大值：" << (numeric_limits<signed char>::max)();
  cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;
  cout << "unsigned char: \t"
       << "所占字节数：" << sizeof(unsigned char);
  cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();
  cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;
  cout << "wchar_t: \t"
       << "所占字节数：" << sizeof(wchar_t);
  cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();
  cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;
  cout << "short: \t\t"
       << "所占字节数：" << sizeof(short);
  cout << "\t最大值：" << (numeric_limits<short>::max)();
  cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;
  cout << "int: \t\t"
       << "所占字节数：" << sizeof(int);
  cout << "\t最大值：" << (numeric_limits<int>::max)();
  cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;
  cout << "unsigned: \t"
       << "所占字节数：" << sizeof(unsigned);
  cout << "\t最大值：" << (numeric_limits<unsigned>::max)();
  cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;
  cout << "long: \t\t"
       << "所占字节数：" << sizeof(long);
  cout << "\t最大值：" << (numeric_limits<long>::max)();
  cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;
  cout << "unsigned long: \t"
       << "所占字节数：" << sizeof(unsigned long);
  cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();
  cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;
  cout << "double: \t"
       << "所占字节数：" << sizeof(double);
  cout << "\t最大值：" << (numeric_limits<double>::max)();
  cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;
  cout << "long double: \t"
       << "所占字节数：" << sizeof(long double);
  cout << "\t最大值：" << (numeric_limits<long double>::max)();
  cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;
  cout << "float: \t\t"
       << "所占字节数：" << sizeof(float);
  cout << "\t最大值：" << (numeric_limits<float>::max)();
  cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;
  cout << "size_t: \t"
       << "所占字节数：" << sizeof(size_t);
  cout << "\t最大值：" << (numeric_limits<size_t>::max)();
  cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;
  cout << "string: \t"
       << "所占字节数：" << sizeof(string) << endl;
  // << "\t最大值：" << (numeric_limits<string>::max)() << "\t最小值：" << (numeric_limits<string>::min)() << endl;
  cout << "type: \t\t"
       << "************size**************" << endl;
  return 0;
}

/*
type:           ************size**************
bool:           所占字节数：1   最大值：1               最小值：0
char:           所占字节数：1   最大值：                最小值：�
signed char:    所占字节数：1   最大值：                最小值：�
unsigned char:  所占字节数：1   最大值：�               最小值：
wchar_t:        所占字节数：4   最大值：2147483647              最小值：-2147483648
short:          所占字节数：2   最大值：32767           最小值：-32768
int:            所占字节数：4   最大值：2147483647      最小值：-2147483648
unsigned:       所占字节数：4   最大值：4294967295      最小值：0
long:           所占字节数：8   最大值：9223372036854775807     最小值：-9223372036854775808
unsigned long:  所占字节数：8   最大值：18446744073709551615    最小值：0
double:         所占字节数：8   最大值：1.79769e+308    最小值：2.22507e-308
long double:    所占字节数：16  最大值：1.18973e+4932   最小值：3.3621e-4932
float:          所占字节数：4   最大值：3.40282e+38     最小值：1.17549e-38
size_t:         所占字节数：8   最大值：18446744073709551615    最小值：0
string:         所占字节数：24
type:           ************size**************
*/