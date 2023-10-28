#include <iostream>
using namespace std;

class Singleton
{
public:
int gId;
static Singleton* getInstance(){
    if (instance==NULL) instance = new Singleton();
    return instance;
}
private:
    Singleton() {}
    static Singleton *instance;
};
Singleton *Singleton::instance=NULL;

int main()
{
Singleton *p = Singleton::getInstance();
    p->gId=100;
    cout << p->gId<<endl;
    return 0;
}