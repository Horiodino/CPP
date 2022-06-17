#include <iostream>
using namespace std;

int main(){
    float billamount;
    float discounte = 0.0;
    cout<<"Enter Bill Amount";
    cin>>billamount;
    if (billamount>=500)
    {
        discounte = billamount*20/100;
    }
    else if (billamount>=100 && billamount>=500)
    {
        discounte = billamount*10/100;
    }
    cout<<billamount<<endl;
    cout<<discounte<<endl;
    cout<<"Discounte Amount Is"<<billamount-discounte;
}