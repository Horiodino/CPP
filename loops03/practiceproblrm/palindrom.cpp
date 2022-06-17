#include <iostream>
using namespace std;
int main(){
    int rev=0,n,r;
    cout<<"Enter Number";
    cin>>n;
    int m=n;
    while (n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if (rev==m)
    {
        cout<<m <<" is Palindrome Number "<<endl;
    }
    else{
         cout<<m <<" is not a Palindrome Number "<<endl;
    }
    
    
}