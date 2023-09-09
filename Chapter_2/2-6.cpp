#include <iostream>

using namespace std;

class Box
{
public:
   double length;
   void setWidth(double wid);
   double getWidth();

private:
   double width;
};

void Box::setWidth(double wid)
{
   width = wid;
   return;
}

double Box::getWidth()
{
   return width;
}

int main()
{
   Box box;
   box.length = 10.0;
   cout << "Length of box :" << box.length << endl;
   // box.width = 10.0;
   box.setWidth(10.0);
   cout << "Width of box:" << box.getWidth() << endl;
   return 0;
}

/* Length of box :10
Width of box:10
 */