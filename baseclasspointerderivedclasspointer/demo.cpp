#include <iostream>
using namespace std;

class Base
{
    public:
    void fun1()
    {
        cout<<"fun1 of Base"<<endl;
    }
};
class Derived :public Base
{
    public:
    void fun2()
    {
        cout<<"fun2 of Derived"<<endl;

    }
};
int main()
{
    Derived d;
    Base *p=&d;
    p->fun1();
    // p->fun2(); object is from derived class can call only that are only in base class


    // Base d;
    // Derived *p=&d;
    // p->fun1();


}
