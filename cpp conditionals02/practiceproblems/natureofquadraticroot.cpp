#include <iostream>
#include <math.h>
using namespace std;
int main(){
    // quadratic formula b square - underroot b square-4*a*c/
    //  whole divided by 2*a
    // if d = 0 real and equal
    // if d > 0 real and unequal
    // if d < 0 imaginary
     
    int a,b,c,d;
    cin>>a>>b>>c;
    d = (b*b)-(4*a*c);
    if (d==0)
    {
        cout<<"real and equal"<<endl;
        cout<<-b/(2*a);
    }
    else{
        if (d>0)
        {
            cout<<"roots are real and unequal"<<endl;
            cout<<(-b+sqrt(d))/(2*a);
        }
        else{
            cout<<"imaginary"<<endl;
        }
    }
}