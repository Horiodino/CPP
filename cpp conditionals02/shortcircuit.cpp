#include <iostream>
using namespace std;
int main(){
    //short circut:
    // if a<b so the 1st condition is false and as we we && operators if 
    // anyone is false so its false so if the second condition is true it shows false
    int a=9,b=8,i=4;
    if (a>=b && i++<=b)
    {
        cout<<i<<endl;
    }
    
}