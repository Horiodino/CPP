#include <iostream>
using namespace std;
int main()
{
    int r, n, sum = 0;
    cout << "Enter Number" << endl;
    cin >> n;
    int m = n;

    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum * 10 + r;
    }
    if (m==sum)
    {
        cout<<"Palindrom"<<endl;
    }
    else{
        cout<<"Not Palindrom"<<endl;
    }
}