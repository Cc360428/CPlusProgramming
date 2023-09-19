#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int n = 65535, m = 20;
   cout << n << "=" << hex << n << oct << "=" << n << endl;
   cout << setbase(10) << m << "=" << setbase(16) << m << setbase(8) << "=" << m << endl;
   return 0;
}
