#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the number for division !";
    cin>>a>>b;
    c = a/b;
    if (b==0)
    {
        cout<<"invalid divisor"<<endl;
    }
    else
    {
        cout<<"the answer is "<<c<<endl;

    }
    
}