#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
  char address[20];
  ifstream inFile;
  inFile.open("address.txt", ios::in);
  while (inFile >> address)
    cout << address << endl;
  inFile.close();
  return 0;
}