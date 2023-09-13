#include <iostream>
using namespace std;

int fvalue = 10;
class CDemo
{
public:
   const int num;
   const int &ref;
   int value;

public:
   CDemo(int n) : num(n), ref(value), value(4) {}
};
int main()
{
   cout << sizeof(CDemo) << endl;
   CDemo f(100);
   // f.ref = f.value  编译不过
   cout << "f.num = " << f.num << "\tf.ref = " << f.ref << "\t f.value = " << f.value << endl;
   return 0;
}

/* 
24
f.num = 100     f.ref = 4        f.value = 4
 */