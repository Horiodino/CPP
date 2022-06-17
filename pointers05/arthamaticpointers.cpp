#include <iostream>
using namespace std;
int main(){
    int A[5] = {2,4,6,8,10};
    int *p=A,*q=&A[4];
    cout<<q-p;
    /*
      // cout<<*p<<endl;
    // p++;
    // cout<<*p<<endl;
    // p--;
    // cout<<*p<<endl;

    // cout<<*p<<endl;
    // cout<<*p+2<<endl;

    cout<<"before the printing of array value"<<endl;
    cout<<p<<endl;

    for (int i = 0; i < 5; i++)
    {
        //1st methode;
        cout<<*p<<" ";
        p++;

        // second methode to represent arrays
        // cout<<i[A];

        // representing adresses of elements of arrays in heap
        // cout<<A+i;

        // we can aslo use pointer name instead of array name;
        // cout<<p[i];
    }
    cout<<"after printing of array value"<<endl;
    cout<<p<<endl;
    */

}