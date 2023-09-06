#include <iostream>
using namespace std;

template <typename Type>
Type Mul(Type a[], int n)
{
  Type t = 1;
  for (int i = 0; i < n; i++)
    t *= a[i];
  return t;
};

int main()
{
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  cout << Mul(a, 9) << endl;
  return 0;
}

/*
362880
*/