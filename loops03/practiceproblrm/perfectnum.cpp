#include <iostream>
using namespace std;
int main(){
     int number, i, sum;
    cout << "Enter number";
    cin >> number;
    for (i = 0; i <= number; i++)
    {
        if (number % i == 0)
        {
            sum+=i;
        } 
        if (2*number==sum)
        {
            cout<<"perfect number";
        }
        else{
            cout<<"not perfect";
        }
    }
}