#include <iostream>
using namespace std;
int main(){
    int x = 2;
    switch (x)
    {
    case 1:cout<<"one";
        break;
        case 2:cout<<"two";
        break;
    
    default:cout<<"invalid input" ;
    //default can be written at start of the code
        break;
    }
    cout<<endl;
}