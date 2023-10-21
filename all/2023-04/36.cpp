#include <iostream>
using namespace std;
#include <fstream>

int main()
{
    int a[8];
    int i = 0;
    cout << "从文件中读取8个整数" << endl;
    freopen("a.txt", "r", stdin);
    for (int i = 0; i < 8; i++)
    {
        cin >> a[i];
    }

    int max = a[0];
    int index = 0;
    for (int i = 0; i < 8; i++)
    {
        if (max < a[0])
        {
            max = a[i];
            index = i;
        }
    }
    cout << "最大值为：" << max << "序号为：" << index << endl;

    return 0;
}