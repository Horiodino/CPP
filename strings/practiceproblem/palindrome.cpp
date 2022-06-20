#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str="helleh ";
    string &r=str; 
    int i;
    cout<<"Printing string in reverse\n";
    for(i = str.length() - 1; i >= 0; i--)
    {

    }
    if (r.compare(str)==0)
    {
        cout<<"Palindrome"<<endl;
    }
    
    // if (str==r)
    // {
    //     cout<<"Palindrome"<<endl;
    // }
    

}