#include <iostream>
using namespace std;
int main()
{
    int remainder, n;
    cout << "Enter Number";
    cin >> n;
    while (n > 0)
    {
        remainder = n % 10;
         n=n/10;
        cout<<remainder;
    }

    return 0;
}