#include <iostream>
using namespace std;
int main(){
    // in nestid if we can use if in if also else nested times
    int a,b,c;
    cout<<"plese enter 3 numbers";
    cin>>a>>b>>c;
    if (a>b && a>c)
    {
        cout<<a<<" is greater";
    }
    else if (b>c)
        {
            cout<<b<<" is greater";
        }
        else{
            cout<<c<<" is greater";
        }
        
    }