#include <iostream>
using namespace std;
int main(){
    int remainder,num,sum=0;
    cout<<"Enter Number";
    cin>>num;
    int m=num;
    while (num>0)
    {
        remainder = num%10;
        num=num/10;
        sum+=remainder*remainder*remainder;
        cout<<sum<<endl; 
    }
    cout<<m;
     if (m==sum)
    {
        cout<<"amstrong"<<endl;
    }
    else{
        cout<<"not amstrong";
    }
   
    
    

}