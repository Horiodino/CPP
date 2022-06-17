#include <iostream>
using namespace std;
int main(){
    int sum=0,n;
        cout<<"Enter of elements You Want ";
        cin>>n;
        int A[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"enter the element";
        cin>>A[n];
        cout<<endl;;
        sum+=A[n];
    }

    int ans =sum/n;
    cout<<ans;

    
    
    
}