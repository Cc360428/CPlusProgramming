#include <iostream>
using namespace std;

class classA
{
public:
   double x, y;
   static int num;
   classA()
   {
      x = 0;
      y = 0;
      num++;
   }

   classA(double x0, double y0)
   {
      x = x0;
      y = y0;
      num++;
   }
   static void staticFun()
   {
      cout << "current_num = " << num << endl;
   }
};

int classA::num = 0;
int main()

{
   classA obj(1.2, 3.4);
   cout << "classA::num = " << classA::num << endl;
   classA::staticFun();
   cout << "obj.num = " << obj.num << endl;
   obj.staticFun();
   cout << endl;
   classA A[3];
   cout << "classA::num = " << classA::num << endl;
   classA::staticFun();
   cout << endl;
   classA *p = new classA(5.6, 7.8);
   cout << "classA::num = " << classA::num << endl;
   classA::staticFun();
   cout << "p->num = " << p->num << endl;
   p->staticFun();
   return 0;
}

/* 

classA::num = 1
current_num = 1
obj.num = 1
current_num = 1

classA::num = 4
current_num = 4

classA::num = 5
current_num = 5
p->num = 5
current_num = 5

 */