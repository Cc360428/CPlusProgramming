#include <iostream>
#include <string>

using namespace std;

int main()

{
   char ch;
   int sum = 0, count = 0, x;
   cout << "请输入整数 （按Ctrl+Z退出）" << endl;
   do
   {
      while (cin >> x)
      {
         sum += x;
         count++;
      }
      cout << "确实要退出输入请安 Q";
      cin.clear();
      cin >> ch;
   } while (toupper(ch) != 'Q');
   cout << "sum = " << sum << ", count = " << count << endl;
   return 0;
}
