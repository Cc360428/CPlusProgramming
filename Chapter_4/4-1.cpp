#include <iostream>
using namespace std;

class myComplex
{
private:
   double real, image;

public:
   myComplex();
   myComplex(double r, double i);
   void outCom();
   myComplex operator-(const myComplex &c);
   friend myComplex operator+(const myComplex &c1, const myComplex &c2);
};

myComplex::myComplex()
{
   real = 0;
   image = 0;
}

myComplex::myComplex(double r, double i)
{
   real = r;
   image = i;
}

void myComplex::outCom()
{
   cout << "(" << real << "," << image << ")";
}

myComplex myComplex::operator-(const myComplex &c)
{
   return myComplex(this->real - c.real, this->image - c.image);
}

myComplex operator+(const myComplex &c1, const myComplex &c2)
{
   return myComplex(c1.real + c2.real, c1.image + c2.image);
}


int main()
{
   myComplex c1(1, 2), c2(3, 4), res;
   c1.outCom();
   cout << "operator+";
   c2.outCom();
   cout << "=";
   res = c1 + c2;
   res.outCom();
   cout << endl;
   c1.outCom();
   cout << "operator-";
   c2.outCom();
   cout << "=";
   res = c1 - c2;
   res.outCom();
   cout << endl;
   return 0;
}

/* 
(1,2)operator+(3,4)=(4,6)
(1,2)operator-(3,4)=(-2,-2)
 */