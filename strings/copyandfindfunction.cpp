#include <iostream>
#include <string>

using namespace std;
int main()
{
    ////s.copy(char des[]) -- it will copy a string in to a char aray
    string s = "welcome ";
    // char str[10];
    // s.copy(str, s.length());
    // str[s.length()]='\0'; // if we did nt use null then the array will not compleat 
    // cout << str << endl;
    // return 0;


    ////s.find(str) or (char) -- used to find the occurence or index of the string or char
    // string str="How are you";
    // cout<<str.find("are")<<endl;
    // cout<<str.rfind('o')<<endl;


    ////s.find_firstoff() -- it finds where the letter in index  - left to right
    string str="Hello World";
    cout<<str.find_first_of('l',4); // here 4 tells start finding the letter from 4


    ////s.find_lastoff() -- right to left
    string str="Hello World";
    cout<<str.find_last_of('l');


    return 0;
}