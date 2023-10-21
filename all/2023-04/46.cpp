#include <iostream>
#include <fstream>
using namespace std;

// 读入当前文件夹下文件dev1.cpp，为该文件的每行代码加上行号后存入dev2.txt文件中
int main()
{
    fstream inf, outf;
    inf.open("dev1.cpp", ios::in);
    outf.open("dev2.txt", ios::out);
    char s[80];

    int n = 1;
    while (!inf.eof())
    {
        inf.getline(s, sizeof(s));
        outf << n++ << ":" << s << endl;
    }
    inf.close();
    outf.close();
    return 0;
}
