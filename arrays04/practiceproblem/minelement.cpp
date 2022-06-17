#include <iostream>
using namespace std;
int main(){
    int min = INT16_MAX;
    int A[]={1,2,3,4,5,6,7,8};
    for (int i = 0; i < 8; i++)
    {
        cout<<A[i] <<endl;
        if (min>A[i])
        {
            min=A[1];
        }
        
    }
    cout<<min<<endl;
    
}