#include <iostream>
using namespace std;

// what's  static variable --- in simple terms its just like global 
// variable but we cant acess it globally but its will in memory until
//  the program was terminated

void fun()
{
    static int s=10;
    s++;
    cout<<s<<endl;
}
int main()
{
    fun();
}