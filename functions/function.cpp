#include <iostream>
using namespace std;

float add(float x,float y)
{
    float z=x+y;
    return z;
}
int main()
{
    float x,y,z;
    cout<<"Enter Two Numbers";
    cin >> x;
    cin >> y;
    z = add(x,y);
    cout<<z<<endl;
}