#include <iostream>
using namespace std;
int main()
{
    int number, i, sum=0;
    cout << "Enter number";
    cin >> number;
    for (i = 0; i <= number; i++)
    {
        if (number % i == 0)
        {
            cout << "the factors of this number are" << endl;
            cout << i << endl;
            sum+=i;
        } 
        else if (number % i != 0)
        {
            cout << "these are not factors of this number " << endl;
            cout << i << endl;
        }
    }
}
