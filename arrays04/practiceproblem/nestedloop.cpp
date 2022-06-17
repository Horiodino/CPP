#include <iostream>
using namespace std;
int main(){
    //nested for loop
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cout<<"("<<i<<","<<j<<")";
        }
        cout<<endl;
    }
    
}