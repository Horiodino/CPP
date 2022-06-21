#include <iostream>
using namespace std;

//   1  parameter passing methode
//   2   pass by value
//   3   pass by addres 
//   4   pass by reference

// void swap(int a,int b)
// {
//     cout<<a<<" "<<b<<endl;
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
//     cout<<a<<" "<<b<<endl;
// }


//by passing or call by address using pointers 
// void swap(int *a,int *b)
// {
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
}


// calling by reference  its sending the value of x,y into a,b juust sending a copy of x,y
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int x=10,y=20;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
}