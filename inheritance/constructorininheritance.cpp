#include <iostream>
using namespace std;

// in this program  non perimeterised deerived class constructor but it will not execute
// this will call  non perimeterised base class constructor then if we continue execution
// so we can see that when we create a onject of derived class i will always execute the
// the main class from where we derived a new clas

class Base
{
public:
    Base()
    {
        cout << "This is non perimeterised base class constructor";
    }
    Base(int x)
    {
        cout << "Permeterised constructor of base class" << x << x;
    }
};

class Derived : public Base
{
    Derived()
    {
        cout << "This is non perimeterised deerived class constructor";
    }
    Derived(int y)
    {
        cout << "This is  perimeterised derived class constructor" << y << endl;
    }
};
int main()
{
    // Derived d;
}