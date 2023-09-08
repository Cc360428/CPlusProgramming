#include <iostream>

using namespace std;

inline int Max(int x, int y)
{
  return (x > y) ? x : y;
}
/*
内联函数主要是应用代码量少的函数，函数语句较多不适合声明，含有循环或者switch语句的函数也不定义为内联函数
 */
// 程序的主函数
int main()
{

  cout << "Max (20,10): " << Max(20, 10) << endl;
  cout << "Max (0,200): " << Max(0, 200) << endl;
  cout << "Max (100,1010): " << Max(100, 1010) << endl;
  return 0;
}

/*
Max (20,10): 20
Max (0,200): 200
Max (100,1010): 1010
 */