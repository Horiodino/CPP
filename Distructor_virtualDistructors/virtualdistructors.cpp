#include <iostream>
using namespace std;
class Base
{
    public:
    Base()
    {
        cout<<"Base Constructor"<<endl;
    }
    virtual ~Base()
    {
        cout<<"Base Distructor"<<endl;
    }
};

class Derived :public Base
{
    public:
    Derived()
    {
        cout<<"Derived Constructor"<<endl;
    }
    public:
    ~Derived()
    {
        cout<<"Derived distructor"<<endl;
    }

};
int main()
{
    Base *p=new Derived;
    delete p;
}