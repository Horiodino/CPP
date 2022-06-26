#include <iostream>
using namespace std;

// pointer to a function
void function()
{
    cout << "Display";
}
int main()
{
    void (*fp)();  // declaration
    fp = function; // initialising
    (*fp)();       // calling
}