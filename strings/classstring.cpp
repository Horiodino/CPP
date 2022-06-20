#include <iostream>
#include <string>

using namespace std;
int main(){
    string str;
    //cin>>str;  it only printe only one word from keyboard so we ue getline function
    cout<<"Enter your name"<<endl;
    getline(cin,str);
    cout<<str<<endl;
}
