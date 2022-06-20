#include <iostream>
#include <string>
using namespace std;
int main()
{
       // reverse itreator 

    string str = "today";
    string::reverse_iterator  it;
    for (it = str.rbegin(); it != str.rend(); it++)
    {
        cout<<*it;
    }

    cout << endl;


     // string::iterator -- iterator is used for acessing all the char of a string acts like a pointer
    // bigin()
    // end()

    // string str = "today";
    // string::iterator it;
    // for (it = str.begin(); it != str.end(); it++)
    {
        // cout<<*it;
        // to make output uppercase we use *it=*it-32; -32 because of ascci code diffrence
        // *it = *it - 32;
        // cout << *it;
    }
}
