#include <iostream>
using namespace std;

/* in exception handling we use throw and catch bu tif we see if else do same work as 
throe and catch so why try catch*/

/*

*/              

int division (int a, int b)
{
    
    if (b==0)
    {
        throw 1;
    }

    else{
        return a/b;
    }
}
/* direct communication between divide and main function */
int main()
{
    int x=10;
    int y=0;
    try{
       int z= division(x,y);
    }
    catch(int e)
    {
        cout<<"division by zero "<<e<<endl;
        cout<<"Bye";
    }
   
    

}