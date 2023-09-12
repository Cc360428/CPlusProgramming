#include <iostream>
using namespace std;

class Demo {
   int id;
   public :
   Demo(int i){
      id = i;
      cout << "id = " << id << " 构造函数" << endl;
   }
   void printDemo();
   ~Demo(){
      cout << "id = " << id << " 析构函数" << endl;
   }
};
void Demo::printDemo(){
   cout << "id = " << id << endl;
}
int main()
{
   Demo d4(4); // 创建
   d4.printDemo(); // 打印
   d4 = 6; // 创建 / 销毁
   d4.printDemo(); // 打印 / 销毁
   return 0;
}

/* 
id = 4 构造函数
id = 4
id = 6 构造函数
id = 6 析构函数
id = 6
id = 6 析构函数
 */