#include <iostream>
using namespace std;
int main(){
    int i,n,factorial=1;
    cout<<"Enter number"<<endl;
    cin>>n;
    for ( i = 1; i <=n; i++)
    {
        factorial*=i;
    }
    cout<<"The Factorial of "<<n <<"is "<<factorial<<endl;
    
}