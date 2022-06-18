#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    //for string
    // char s1[20] = "Programming";
    // char s2[10] = "gram";
    // if we enter something that is not in string then its NULL
    // if (strstr(s1, s2) != NULL)
    // {
    //     cout << strstr(s1, s2);
    // }
    // else{
    //     cout<<"Not Founde";
    // }

    // for charecter ----  occerence of string or where it occures
    // cout<<strchr(s1,'g');


    //string compare ------ it will compare two string in alphabatically 

    char x1[20]="hello";
    char x2[20]="hello";
    cout<<strcmp(x1,x2)<<endl;
}