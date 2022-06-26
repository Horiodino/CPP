#include <iostream>
using namespace std;

int g=100; // here g is a global variable it can be acessed from any
//  part of code it is stored in code section its always in memory
// for example here we use g in funtion fun() and as well as in main function

// loocal variable in function is only in memory while running its in stack
void fun()
{
    int a=10;
    a++;

    // here this g is not a global variable and if we print g here it wont print g that is
    // in global variable it will print that g that is nearest to it
    int g=1;
    g++;
    cout<<"The value of g in function is "<<g;
    cout<<"value of a is "<<a<<endl;

    g++; // acessing global variable g 
}

int main()
{
    cout<<g<<endl;
    fun();
    cout<<g<<endl;
    g--;
    cout<<g<<endl;

}