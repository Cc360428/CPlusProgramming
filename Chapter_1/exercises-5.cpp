#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  cout << "您需要输入N个字符串:";
  cin >> n;
  cout << "您需要输入(" << n << ")组字符串 \n"
       << endl;

  string *arrayss = new string[n];

  string max, min;
  int maxLen, minLen, total;

  for (int i = 0; i < n; i++)
  {
    cout << "请输入字符串(" << i + 1 << ")组字符串" << endl;
    string tmpS;
    cin >> tmpS;

    if (tmpS.length() > maxLen)
    {
      maxLen = tmpS.length();
      max = tmpS;
    }

    if (tmpS.length() < minLen)
    {
      minLen = tmpS.length();
      min = tmpS;
    }

    total += tmpS.length();
    arrayss[i] = tmpS;
  }

  cout << "max:" << max << endl;
  cout << "min:" << min << endl;
  cout << "ave:" << (total / n) << endl;
  delete[] arrayss;
  return 0;
}

/*
您需要输入N个字符串:3
您需要输入(3)组字符串

请输入字符串(1)组字符串
1
请输入字符串(2)组字符串
22
请输入字符串(3)组字符串
333
max:333
min:1
ave:2
 */