#include<iostream>
using namespace std;
int main()
{
    int rollnum;
    if(false){
        cout<<"hello"<<endl;
    }
    else{
        cout<<"bye"<<endl;
    }
    cout<<"Enter your Roll number"<<endl;
    cin>>rollnum;
    if(rollnum<1){
        cout<<"Invalid Roll number"<<endl;
    }
    else{
        cout<<"Valid Roll nuber"<<endl;
    }
}