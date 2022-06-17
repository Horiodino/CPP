#include <iostream>
using namespace std;
int main(){
    int i,n=10,key;
    int A[10];
    cout<<"Enter Number"<<endl;
    cin>>A[i];
    cout<<"Enter Key you want to founde"<<endl;
    cin>>key;
    for ( i = 0; i < n; i++)
    {
        if (key==A[i])
        { 
            cout<<"the key is founde"<<i<<endl;
        }
        return 0;
        
    }
    cout<<"not founde";
    

}