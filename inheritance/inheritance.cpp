#include <iostream>
using namespace std;
class base
{
    public:    
    void display()
    {
        cout<<"display of base ";
    }

};
class Derived:public base{};

int main()
{
    Derived d;
    d.display();

}
