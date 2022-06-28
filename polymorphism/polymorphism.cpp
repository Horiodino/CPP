#include <iostream>
using namespace std;

class car
{
    public:
   virtual void start(){cout<<"car started"<<endl;}
};

class inova:public car
{
    public:
    void start(){cout<<"inova started"<<endl;}
};


class skyline : public car
{
    public:
    void start(){cout<<"skyline started"<<endl;}
};
int main()
{
    car *p;
    p=new inova();
    p->start();
    p=new skyline();
    p->start();
}