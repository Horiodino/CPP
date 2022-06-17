#include <iostream>
using namespace std;
int main(){
    cout<<"Menu\n"<<endl;
    cout<<"1.Add\n"<<"2.Sub\n"<<"3.Mul\n"<<"4.div\n"<<endl;
    int option;
    cout<<"Enter your choice";
    cin>>option;
    int a,b,c;
    cout<<"Enter two numbers";
    cin>>a>>b;
    switch (option)
    {
    case 1:c=a+b;
        break;
        case 2:c=a-b;
        break;
        case 3:c=a*b;
        break;
        case 4:c=a/b;
        break;
    
    default:cout<<"Invalid option";
        break;
    }
    cout<<"The answer is "<<c<<endl<<endl;

}