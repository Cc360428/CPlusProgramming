#include <iostream>

using namespace std;

class CEmployee
{
private:
   string szName;
   int salary;

public:
   void setName(string);
   string getName();
   void setSalary(int);
   int getSalary();
   int averageSalary(CEmployee);
};
void CEmployee::setName(string name)
{
   szName = name;
   return;
}

string CEmployee::getName()
{
   return szName;
}
void CEmployee::setSalary(int s)
{
   salary = s;
   return;
}
int CEmployee::getSalary()
{
   return salary;
}

int CEmployee::averageSalary(CEmployee ce)
{
   return (salary + ce.getSalary()) / 2;
}

int main()
{
   CEmployee ce1, ce2;
   ce1.setName("Tom1234567");
   ce1.setSalary(5000);
   ce2.setName("Yong7654321");
   ce2.setSalary(3500);
   cout << "avg=" << ce1.averageSalary(ce2) << endl;
   return 0;
}
/* avg=4250
 */