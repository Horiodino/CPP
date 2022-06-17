#include <iostream>
using namespace std;
int sum=0;
int main(){
    int A[]={1,2,3,4,5,6,7,8};
    for(auto x:A)
    sum+=x;
    cout<<"sum of these number is "<<sum<<endl;
}