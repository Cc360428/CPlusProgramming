
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

/**
 *
 * 输出
 * ZhangMeng
 *  #####201902
 * 最终得分 90.7
 *
 */
int main()
{
    double score = 90.647;
    int id = 201902;
    string name = "ZhangMeng";
    cout.width(10);
    cout << name << endl;
    cout << setw(10) << setfill('#') << id << endl;
    cout << "最终分数为：" << setprecision(3) << score << endl;
    return 0;
}