#include <iostream>
using namespace std;

class Samp
{
public:
   void Setij(int a, int b)
   {
      i = a;
      j = b;
   }

   ~Samp()
   {
      cout << "析构" << endl;
   }
   int GetMuti()
   {
      return i * j;
   }

protected:
   int i;
   int j;
};

int main()
{
   Samp *p;
   p = new Samp[5];
   if (!p)
   {
      cout << "地址内存分配失败" << endl;
      return 1;
   }
   for (int j = 0; j < 5; j++)
   {
      p[j].Setij(j, j);
   }

   for (int k = 0; k < 5; k++)
   {
      cout << "Muti[" << k << "] 值是：" << p[k].GetMuti() << endl;
   }

   delete[] p;
   return 0;
}

/*


Muti[0] 值是：0
Muti[1] 值是：1
Muti[2] 值是：4
Muti[3] 值是：9
Muti[4] 值是：16
析构
析构
析构
析构
析构

 */