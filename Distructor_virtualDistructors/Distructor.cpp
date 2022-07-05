#include <iostream>
using namespace std;

class demo
{
    public:
    demo()
    {
    p=new int[9];
        cout<<"constructor\n";
    }
    ~demo()
    {
        delete []p;
        cout<<"destructor";
    }
};
void fun()
{
    demo *p=new demo();
    delete p;
    // demo d;
}
int main()
{
    fun();
}

