
#include <iostream>
using namespace std;

/**
 *
 * 程序输出结果为 2050
 */

class Sum
{
public:
    static int x;
    Sum(int i = 2020)
    {
        x = i + x;
    }
    int GetSum() { return Sum::x + 26; }
};

int Sum::x = 4;
int main()
{
    Sum test;
    cout << test.GetSum() << endl;
    return 0;
}