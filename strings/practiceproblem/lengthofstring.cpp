#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str = "welcome";
    int counte = 0;

    // inbuilt method
    // cout<<str.length();



    // for loop methode
    // for (int i = 0; str[i] != '\0'; i++)
    // {
    //     counte++;
    // }
    // cout<<counte;
    // cout << endl;


    string::iterator it;
    for (it =str.begin(); str.begin() != str.end(); it++)
    {
        counte++;
    }

    cout << counte;

    cout << endl;
}