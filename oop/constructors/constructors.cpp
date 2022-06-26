#include <iostream>
using namespace std;

// a constructor hava same name as class name it did'nt retun any value.

class Rectengle
{
private:
    int length;
    int breath;
public:
// default constructor  or non perameterised constructor --it dont take any perameters
    Rectengle()
    {
        length=1;
        breath=1;

    }
    //
    Rectengle(int l,int b)
    {
        setLB(l,b);
    } 

    // copy constructor 
    Rectengle (Rectengle &r)
    {
        length=r.length;
        breath=r.breath;
    }

    void setLB(int a=0,int b=0)  
    {if (a<0 && b<0)
    {
        cout<<"Invalid input "<<endl;
    }
    else{
    
        length=a;
        breath=b;
    }
    } 

    int area()
    {
        return 2*(length+breath);
    }
    int parameter()
    {
        return length*breath;
    }
};

int main()
{
    Rectengle r1(10,5);
    Rectengle r2(r1);
    cout<<r2.area()<<endl;

}