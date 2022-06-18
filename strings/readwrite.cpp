#include <iostream>
using namespace std;
int main(){
    char S[30];
    char S2[30];
    cout<<"Enter Your Name"<<endl;
    cin.get(S,30);
    cout<<"Welcome "<<S<<endl; 

    cin.ignore();
    // if we use get it wont take input it directely cout so use cin ignore to solve it
    cout<<"Enter Your Name Again"<<endl;
    cin.get(S2,30); 
    cout<<"Welcome "<<S2<<endl;  
}