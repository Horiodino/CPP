#include <iostream>
using namespace std;

class car
{
    public:
   virtual void start()=0; // puer virtual function
    // we cant create an object of car class but we can create a pointer
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
    
}