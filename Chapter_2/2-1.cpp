#include <iostream>

using namespace std;

class myDate
{
public:
   myDate();
   myDate(int, int, int);
   void setDate(int, int, int);
   myDate getDate();
   int getMoth();
   void printDate() const;
};

// myDate::myDate()
// {
//    year = 1970;
//    month = 1;
//    day = 1;
// };

int main()
{
   return 0;
}