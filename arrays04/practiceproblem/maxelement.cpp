#include <iostream>
using namespace std;
int main(){
    int x;
    int max =INT16_MIN;
    int A[]={1,2,3,77,5,6,7,55};
    for (int i = 0; i < 8; i++)
    {
        cout<<A[i]<<endl;
        if (max<A[i])
        {
            max=A[i];
        }
    }
    cout<<max<<" is the maximum number in this array";
    
    
}