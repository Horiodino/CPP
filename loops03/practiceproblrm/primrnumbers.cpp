#include <iostream>
using namespace std;
int main(){
     int number, i, counte;
    cout << "Enter number";
    cin >> number;
    for (i = 0; i <= number; i++)
    {
        if (number % i == 0)
        {
            counte++;
        } 
        if (counte==2)
        {
            cout<<"Its a Prime Number"<<endl;
        }
        
    }
}