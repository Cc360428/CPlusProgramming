#include <iostream>
#include <string>

using namespace std; // 使用命名空间 std

int main()
{
    // 使用 << 运算符将数据插入到输出流中
    int num = 42;
    double pi = 3.14159;
    string text = "Hello, World!";

    cout << "Integer: " << num << endl;
    cout << "Double: " << pi << endl;
    cout << "String: " << text << endl;

    // 使用 put() 成员函数将字符写入输出流
    char ch = 'A';
    cout.put(ch);
    cout.put('\n'); // 换行

    // 使用 write() 成员函数将二进制数据写入输出流
    char buffer[] = "Binary data";
    cout.write(buffer, sizeof(buffer));

    // 使用 flush() 成员函数刷新输出流
    cout << "Output will be flushed after 2 seconds..." << endl;
    cout << "This is flushed immediately." << endl;
    cout.flush();

    // 使用 precision() 成员函数设置浮点数的小数位数
    double value = 3.14159265359;
    cout.precision(2); // 设置小数位数为2
    cout << "Pi: " << value << endl;

    return 0;
}