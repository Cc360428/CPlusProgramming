#include <iostream>

// 定义一个通用的交换函数模板
template <typename T>
void swapValues(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int num1 = 5, num2 = 10;
    double dbl1 = 3.14, dbl2 = 2.71;

    // 使用函数模板交换两个整数
    swapValues(num1, num2);
    std::cout << "Swapped integers: " << num1 << " " << num2 << std::endl;

    // 使用函数模板交换两个双精度浮点数
    swapValues(dbl1, dbl2);
    std::cout << "Swapped doubles: " << dbl1 << " " << dbl2 << std::endl;

    return 0;
}