#include <iostream>
#include <string>

using namespace std; // 使用命名空间 std

int main()
{
    // 使用 cin 成员函数从标准输入流中读取数据
    int age;
    string name;

    cout << "Enter your name: ";
    cin >> name; // 从键盘读取一个字符串

    cout << "Enter your age: ";
    cin >> age; // 从键盘读取一个整数

    // 输出从标准输入获得的数据
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;

    // 使用 peek() 成员函数查看下一个字符
    char nextChar;
    cout << "Enter a character: ";
    nextChar = cin.peek();
    cout << "The next character is: " << nextChar << endl;

    // 使用 ignore() 成员函数从输入流中忽略字符
    char ch;
    cout << "Enter a character: ";
    cin.ignore(100, '\n'); // 忽略输入的前100个字符，直到遇到换行符
    cin.get(ch);
    cout << "You entered: " << ch << endl;

    return 0;
}