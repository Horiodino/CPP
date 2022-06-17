#include <iostream>
using namespace std;
int main(){
    //for each loop method to representing arrays
    int A[] = {2,3,4,5,6};
    for(auto x :A)
    cout<<x; //here x is a variable that is
    //  coping the value of array and displaying it

    // standard methode to representing arrays
    for (int i = 0; i < 5; i++) //disadvantage:we need to declare i<5
    {
        cout<<A[i];
    }
    
}