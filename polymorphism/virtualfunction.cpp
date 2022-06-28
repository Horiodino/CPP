#include <iostream>
using namespace std;

class Base
{
    public:
    virtual void Display() //when base class function declared as virtual
    //   then the display not based on pointer anymore
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
    Base *ptr=&d;  // function is called based on pointer not on object
    ptr->Display();

}