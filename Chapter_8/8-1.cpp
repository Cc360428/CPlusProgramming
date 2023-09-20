#include <iostream>
#include <fstream>

using namespace std;
int main()
{
   // in file
   ifstream inFile;
   inFile.open("test.txt", ios::in);
   if (inFile)
   {
      cout << "成功打开文件:test.txt" << endl;
      inFile.close();
   }
   else
      cout << "文件 test.txt 打开失败" << endl;

   // out file
   ofstream outFile;
   outFile.open("test1.txt", ios::out);
   if (!outFile)
      cout << "Error1" << endl;
   else
   {
      cout << "成功打开文件 test1.txt" << endl;
      outFile.close();
   }

   outFile.open("test2.txt", ios::out | ios::in);
   if (outFile)
   {
      cout << "成功打开 test2.txt" << endl;
      outFile.close();
   }
   else
      cout << "Error2" << endl;

   // in and our file
   fstream ioFile;
   ioFile.open("test3.txt", ios::out | ios::in | ios::trunc); // trunc 没有就创建
   if (!ioFile)
      cout << "error 3" << endl;
   else
   {
      cout << "成功打开 test3.txt" << endl;
      ioFile.close();
   }
   return 0;
}