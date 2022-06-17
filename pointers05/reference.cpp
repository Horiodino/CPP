#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int &c; // we canot declare any reference without declare it if we run it will show error
    int &c;
    int &y = x;
    cout << x << endl;
    y++;
    x++;
    cout << x << endl;
    cout << &x << &y << endl; // as we see the adress of variable of x , so y doesnot use any memory
}