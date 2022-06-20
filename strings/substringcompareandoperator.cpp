#include <iostream>
#include <string>

using namespace std;
int main()

{
    //s.substring() -- basically start the string from the index you entered 
    // string str="Programming";
    // cout<<str.substr(3,2)<<endl; // here 2 means i want to just read two ch
    //ar from where the string start in substring 


    //s.compare -- compare two string and give the diffrence between them
    // string str1="morning";
    // string str2="evening";   //askicode  +ve means less    +ve means greater 0 is equal
    // cout<<str1.compare(str2);
    // cout<<endl;



    // operators in string

    //at() -- its just like subscript but we can also write in it
    string str="Holiday";
    string str2 ="World";
    // str[4]='M';
    // // cout<<str.at(4);
    // cout<<str;
    // cout<<endl;

    // return 0;


    // concatination
    str=str+str2;
    cout<<str<<endl;



}