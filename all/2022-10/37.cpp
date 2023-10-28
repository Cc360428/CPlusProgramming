#include <iostream>
using namespace std;

class TwoCord
{
private:
    int x, y;

public:
    TwoCord(int x, int yy)
    {
        this->x = x;
        y = yy;
    }
    void display()
    {
        cout << "x = " << x << " y = " << y;
    }
};
class ThreeCord : public TwoCord
{
    int z;

public:
    ThreeCord(int x, int yy, int zz) : TwoCord(x, yy)
    {
        z = zz;
    }
    void display()
    {
        TwoCord::display();
        cout << ", z = " << z<< endl;
    }
};
int main()
{
    ThreeCord c(6, 8, 10);
    c.display();
    return 0;
}