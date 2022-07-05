#include <iostream>
using namespace std;
class myexception{
    void fun()
    {
    cout<<"error code 1";
    }
    
};

int division (int &x, int &y) throw()
{
    if(y==0)
    {
        throw myexception();
    }
    else{
        return x/y;
    }
}
int main()
{
    int x=10,y=0;
    try{
        if(y==0)
    {
        throw myexception();
    }
    else{
        return x/y;
    }
    }

    catch(myexception e)
    {
        cout<<"division by zero"<<endl;
    }
    int z=division(x,y);

}