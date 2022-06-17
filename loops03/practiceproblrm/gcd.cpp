#include <iostream>
//greatesst common divisor
using namespace std;
int main()
{
    int m,n;
    do
    {
        if (m>n)
        {
            m=m-n;
        }
        else if (n<n)
        {
            n=n-m;
        }
        
    } while (m!=n);
    cout<<"Gcd";
    return 0;
}
