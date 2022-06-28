#include <iostream>
using namespace std;
class Base
{
    public:
    void Display()
    {
        cout<<"display of base "<<endl;
    }
};
class Derived:public Base
{
    public:
    void Display()
    {
        cout<<"display of derived "<<endl;
    }
};
int main()
{
    Derived d;
    d.Display();
    
}