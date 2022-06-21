#include <iostream>
using namespace std;
int *fun()
{
    int *p=new int [5];
    for(int i=0;i<5;i++)
    {
        p[i]=1+i;
    }
    cout<<"Address of p in heap "<<p<<endl;
    return p;
}


// we can acess the heap  from main function

int main()
{
    int *q =fun();
    for(int i=0;i<5;i++)
    {
        cout<<q[i];
    }
    cout<<endl;

    cout<<"Address of q in heap "<<q<<endl;

}