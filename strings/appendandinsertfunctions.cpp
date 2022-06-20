#include <iostream>
#include <string>

using namespace std;
int main()
{
    //// s.append ---- add new content in string
    string str ="hello";
    cout<<str.capacity()<<"this is capacity "<<endl;
    str.append("Hello how are you are you are you fine ");
    cout<<str.capacity()<<"capacity after append "<<endl<<str.length()<<"this is lengt "<<endl;
    cout<<str<<endl;

    ////s.insert(3,"ok") -- this function will insert insert a string in a given index
    //  string str="how you";
    //  str.insert(3," area ",4); // we can also insert a pirticular character as per need
    //  cout<<str<<endl;

    //// s.replace() -- it can replace a pirticulace string char
    //  string str = "programming";
    //  str.replace(3,5,"gamer"); here i want to start replacing from 3 index and i want
    //  to remove 5 char from that index and place whaat i want to replace
    //  cout<<str<<endl;

    //// s.erase -- just like clear
    // string str = "programming";
    //     str.erase();
    //     cout<<str<<endl;


    //// s.push_back(); -- just add a single char at the end of the dtring
    // string str = "programming";
    // str.push_back('H');
    // cout<<str<<endl;

    //// s.pop_back(); -- it will take out a word or string from a string just like backspace
    // string str = "programming";
    // str.pop_back('g');
    // cout<<str<<endl;

    //// s1.swap(s2); -- interchange or swap the value of string
    // string str1 = "programming";
    // string str2 = "language";
    // str1.swap(str2);
    // cout<<str1<<endl;
    // cout<<str2<<endl;
}