#include <iostream>
using namespace std;

// 全局变量声明
int g;

int main()
{
     // 局部变量声明
     int a, b;

     // 实际初始化
     a = 10;
     b = 20;
     g = a + b;

     cout << g << endl;

     int c = 10;
     {
          int c = 20; // 块作用域变量
          std::cout << "块变量: " << c << std::endl;
     }
     std::cout << "外部变量: " << c << std::endl;
     return 0;
}