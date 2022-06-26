#include <iostream>
using namespace std;
//  what is recursive function  a recursive function is a function which call it self

void fun(int n)
{
    if (n>0)
    {
        cout<<n<<endl;
        fun(n-1);
    }
}


int main()
{
    int x=5;
    fun(x);

}