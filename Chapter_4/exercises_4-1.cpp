#include <iostream>
using namespace std;
class myComplex
{
   double real, image;

public:
   myComplex(double r = 0, double i = 0) : real(r), image(i) {}
   operator double();
};
myComplex::operator double() { return real; }
int main()
{
   myComplex c(1.2, -3.4);
   cout << (double)c << endl;
   double n = 12 + c;
   cout << n << endl;
   return 0;
}