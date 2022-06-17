#include<iostream>
using namespace std;
int main(){
    int rev=0,n,r;
     cout<<"Enter nummber";
     cin>>n;
     int m=n;
    while (n>0)
    {
        r=n%10;
        n=n/10;
        rev = rev*10+r;
    }
    cout<<"the Reverse of "< <m <<"is "<< rev<<endl;
    
}