#include <iostream>
#include <fstream> // 包含文件流头文件
#include <string>

using namespace std; // 使用命名空间 std

int main()
{
    // 使用 ofstream 来创建和写入文件
    ofstream outFile("output.txt"); // 打开一个名为 "output.txt" 的输出文件

    if (!outFile.is_open())
    {
        cerr << "Error: Cannot open output file." << endl;
        return 1;
    }

    outFile << "This is some text written to the file." << endl;
    outFile << "Another line of text." << endl;

    outFile.close(); // 关闭文件

    // 使用 ifstream 来读取文件内容
    ifstream inFile("output.txt"); // 打开 "output.txt" 文件以进行读取

    if (!inFile.is_open())
    {
        cerr << "Error: Cannot open input file." << endl;
        return 1;
    }

    string line;
    while (getline(inFile, line))
    {
        cout << line << endl; // 输出文件中的每一行文本
    }

    inFile.close(); // 关闭文件

    // 使用 fstream 进行读写操作
    fstream file("data.txt", ios::in | ios::out | ios::app); // 打开 "data.txt" 文件以进行读取、写入、和追加操作

    if (!file.is_open())
    {
        cerr << "Error: Cannot open file for read/write." << endl;
        return 1;
    }

    file << "This is a line appended to the file." << endl;

    file.seekg(0, ios::beg); // 将文件指针定位到文件的开头
    while (getline(file, line))
    {
        cout << line << endl; // 输出文件中的每一行文本
    }

    file.close(); // 关闭文件

    return 0;
}