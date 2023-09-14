#include <iostream>
using namespace std;
class myComplex
{
public:
   double real, image;
   myComplex() : real(0), image(0){};
   myComplex(double, double);
   myComplex AddrealOne();
   myComplex AddImageOne();
   void outCom();
};

myComplex::myComplex(double real, double image)
{
   this->real = real;
   this->image = image;
}
void myComplex::outCom()
{
   cout << "(" << real << "," << image << ")";
}

myComplex myComplex::AddrealOne()
{
   this->real++;
   return *this;
}

myComplex myComplex::AddImageOne()
{
   this->image++;
   return *this;
}

int main()
{
   myComplex c1(1, 1), c2, c3;
   c1.outCom();
   c2.outCom();
   c3.outCom();
   cout << endl
        << "我是分界线" << endl;
   c2 = c1.AddrealOne();
   c1.outCom();
   c3 = c1.AddImageOne();
   c2.outCom();
   c3.outCom();
   cout << endl;
   return 0;
}
/* 
(1,1)(0,0)(0,0)
我是分界线
(2,1)(2,1)(2,2) 
*/
