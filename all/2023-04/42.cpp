#include <iostream>

using namespace std;

int global = 1;
class Demo
{
private:
    int i;

public:
    Demo()
    {
        i = global++;
        cout << i << "constructor" << endl;
    }
    ~Demo()
    {
        cout << i << "destructor" << endl;
    }
    int getValue()
    {
        return i;
    }
};

int main()
{

    Demo *pd = new Demo[2];
    cout << "pd[0]=" << pd[0].getValue() << ",pd[1]" << pd[1].getValue() << endl;
    delete[] pd;
    return 0;
}
/**
1constructor
2constructor
pd[0]=1,pd[1]2
2destructor
1destructor
*/