#include <iostream>
using namespace std;
class pointer
{
public:
   int a;
   int *p;
   pointer()
   {
      a = 100;
      p = new int(10);
   }
   pointer(const pointer &tempp)
   {
      if (this != &tempp)
      {
         a = tempp.a;
         p = tempp.p;
      }
   }
};
int main()
{
   pointer p1;
   pointer p2(p1);
   pointer p3 = p1;
   cout << "\n初始化后，各对象的值及内存地址" << endl;
   cout << "对象名 \t 对象地址 a 的值 p中的值 p值向的值 p的地址" << endl;
   cout << "p1:\t" << &p1 << ", " << p1.a << ", " << p1.p << ", " << *p1.p << ", " << &p1.p << endl;
   cout << "p2:\t" << &p2 << ", " << p2.a << ", " << p2.p << ", " << *p2.p << ", " << &p2.p << endl;
   cout << "p3:\t" << &p3 << ", " << p3.a << ", " << p3.p << ", " << *p3.p << ", " << &p3.p << endl;

   *p1.p = 20;
   p2.a = 300;

   cout << "\n修改后，各对象的值及内存地址" << endl;
   cout << "对象名 \t 对象地址 a 的值 p中的值 p值向的值 p的地址" << endl;

   cout << "p1:\t" << &p1 << ", " << p1.a << ", " << p1.p << ", " << *p1.p << ", " << &p1.p << endl;
   cout << "p2:\t" << &p2 << ", " << p2.a << ", " << p2.p << ", " << *p2.p << ", " << &p2.p << endl;
   cout << "p3:\t" << &p3 << ", " << p3.a << ", " << p3.p << ", " << *p3.p << ", " << &p3.p << endl;
   return 0;
}

/*

初始化后，各对象的值及内存地址
对象名   对象地址 a 的值 p中的值 p值向的值 p的地址
p1:     0x7ffed31a6f80, 100, 0x224d010, 10, 0x7ffed31a6f88
p2:     0x7ffed31a6f70, 100, 0x224d010, 10, 0x7ffed31a6f78
p3:     0x7ffed31a6f60, 100, 0x224d010, 10, 0x7ffed31a6f68

修改后，各对象的值及内存地址
对象名   对象地址 a 的值 p中的值 p值向的值 p的地址
p1:     0x7ffed31a6f80, 100, 0x224d010, 20, 0x7ffed31a6f88
p2:     0x7ffed31a6f70, 300, 0x224d010, 20, 0x7ffed31a6f78
p3:     0x7ffed31a6f60, 100, 0x224d010, 20, 0x7ffed31a6f68

 */