#include <iostream>
using namespace std;

class demo
{
    public:
    int x=10;
    int y=20;
    void display() const
    {
        x++; /* we cant modify the members of the class when the 
        function is declared as constent*/
        cout<<x <<" "<<y<<endl;
    }

};
int main()
{
    // 1st use
    /* const int c=20; */
    /* c++; we cant modify any value if we use const */


    // 2nd use
    int x=20;
    const int *ptr=&x; // this pointer poiting on vriable x
    /* ++*ptr;  it is a pointer to a constant type integer so we can use
    this pointer poiting on vriable x but we cant modify the ponter and x
    even we remove constant from int x the *ptr will constent so we cant modify */


    
    int y=10;
    ptr=&y;  
    // ++*ptr;
    /* same  pointer poiting on vriable y but we cant modify the pointer value 
    because its const */


    //3rd use
    int z=11;
    int * const ptr=&z;  /*this ptr is constent and is of type of type int
     we cant move the poniter till it assigned  but we can modify z */
    ++z;


    // 4th  use
    int a=22;
    const int *ptr=&a;
    /*++*ptr;we cant odify data or we cant do move the pointer to other variable
    ptr=&a;*/

    cout<<*ptr;

    demo d;
    d.display();

}