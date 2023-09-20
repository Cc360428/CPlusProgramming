#include <iostream>
template <class T1, class T2>
class Pair
{
public:
   T1 first;
   T2 second;
   Pair(T1 k, T2 v) : first(k), second(v) {}
   bool operator<(const Pair<T1, T2> &p) const;
};

template <class T1, class T2>
bool Pair<T1, T2>::operator<(const Pair<T1, T2> &p) const
{
   return first < p.first;
}

using namespace std;
int main()
{
   Pair<string, int> student1("Tom", 19);
   Pair<string, int> student2("Jim", 21);
   Pair<int, int> student3(20, 20);
   Pair<string, string> dic("word", "单词");
   cout << student1.first << " " << student1.second << endl;
   cout << student2.first << " " << student2.second << endl;
   cout << student3.first << " " << student3.second << endl;
   cout << dic.first << " " << dic.second << endl;
   bool a = student1 < student2;
   if (a == 0)
      cout << student1.first << " " << student2.first << endl;
   else
      cout << student1.first << " " << student2.first << endl;
   return 0;
}