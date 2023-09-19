#include <iostream>
#include <iomanip>
#include <bitset>

using namespace std; // 使用命名空间 std

int main()
{
    int number = 42;
    double pi = 3.14159265359;

    // 使用 setbase 显示不同进制的整数
    cout << "Decimal: " << dec << number << endl;
    cout << "Hexadecimal: " << hex << number << endl;
    cout << "Octal: " << oct << number << endl;

    // 使用 setw 和 setfill 设置字段宽度和填充字符
    cout << setw(10) << setfill('*') << "Hello" << endl;
    cout << "Pi: " << setw(10) << setfill('0') << pi << endl;

    // 使用 setprecision 设置浮点数的小数位数
    cout << "Default precision: " << pi << endl;
    cout << "Precision 2: " << setprecision(2) << pi << endl;
    cout << "Precision 6: " << setprecision(6) << pi << endl;

    // 使用 setiosflags 设置特定格式标志
    cout << "Scientific notation: " << setiosflags(ios::scientific) << pi << endl;

    // 使用 resetiosflags 重置特定格式标志
    cout << "Default format: " << resetiosflags(ios::scientific) << pi << endl;

    // 使用 std::bitset 来显示二进制数字
    bitset<8> binaryNumber(42);
    cout << "Binary: " << binaryNumber << endl;

    return 0;
}