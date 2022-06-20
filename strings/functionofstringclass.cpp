#include <iostream>
#include <string>

using namespace std;
int main(){
    string str="Hello";
    // cout<<str.length()<<endl;
    // cout<<str.size();
    str.resize(30);
    // cout<<str.capacity()<<endl;
    cout<<str.max_size();


    str.clear();
    cout<<str<<endl;
    if (str.empty())
    {
        cout<<"its empty";
    }
    else{
        cout<<"not empty";
    }
    
}