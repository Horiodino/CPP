#include <iostream>
using namespace std;

int & fun(int &x)
{
    // int x=10;
    return x; // reference to stack memory associated with local varialbe 'x' 
    //returned so we canot return the reference of local variable


// here its a reference of local variable of main a is sent to x x is& to same a and then returns
    
}
int main()
{
    int a=10; //or fun(a)=25;
    fun(a)=25;

    cout<<a<<endl;

}