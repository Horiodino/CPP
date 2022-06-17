#include <iostream>
using namespace std;
int main(){
    int n,r,sum=0;
    cout<<"Enter a Number"<<endl;
    cin>>n;
    while (n!=0)
    {
        r=n%10;
        n=n/10;
        cout<<r;
        sum=sum+r;
    }
    cout<<endl;
    

}