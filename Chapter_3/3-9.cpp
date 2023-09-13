#include <iostream>
using namespace std;

class constClass
{
   const int conMbr;
   int Mbr;

public:
   constClass() : conMbr(0), Mbr(100) {}
   constClass(int i) : conMbr(i)
   {
      Mbr = 200;
   }

   void printConst()
   {
      cout << "conMbr = " << conMbr << ", Mbr = " << Mbr << endl;
   };
   int getConst()
   {
      cout << "调用非常量函数" << endl;
      return conMbr;
   }
      int getConst() const
   {
      cout << "调用常量函数" << endl;
      return conMbr;
   }

   int getValue() const
   {
      cout << "调用常量函数" << endl;
      return conMbr;
   }
   int getValue()
   {
      return Mbr;
   }
   void processConst()
   {
      cout << "-- 在processConst函数中非常亮--" << endl;
      int x = 2 * conMbr + 1;
      cout << "x = 2 *conMbr +1 = " << x << endl;
      Mbr++;
      cout << "Mbr = " << Mbr << endl;
   }

   void processConst() const
   {
      cout << "-- 在processConst函数中非常亮--" << endl;
      int x = conMbr + 1;
      cout << "Mbr = " << Mbr << endl;
   }
};
int main()
{
   constClass ob1(123), ob2;
   ob1.printConst();
   cout << "ob2.getConst() = " << ob2.getConst() << endl;
   ob2.processConst();
   const constClass ob3(20);
   cout << "ob3.getConst() = " << ob3.getConst() << endl;
   ob3.processConst();
   return 0;
}

/* 
conMbr = 123, Mbr = 200
调用非常量函数
ob2.getConst() = 0
-- 在processConst函数中非常亮--
x = 2 *conMbr +1 = 1
Mbr = 101
调用常量函数
ob3.getConst() = 20
-- 在processConst函数中非常亮--
Mbr = 200
 */
