# include <iostream>
using namespace std;// use this function for printing , doesnot requires using std::ahead cout

int main()
{

    int a,b,c;   // denoting integer 
    string name;
    /*cout<<"enter two numbers";
    cin>>a>>b;   // taking input using cin>>
    c = a+b;     // initilising a+b in c
    cout<<"the sum of a and b is "<<c <<endl; // using endl for new line
    cout<<"hii this is my first code in c++ ";*/
    cout<<"May i Know your name !!";
    getline(cin,name);
    // you can use multiple worde/infanite
   // cin>>name; you can only use one word
    cout<<"hello "<<name<<endl;
    return 0;
    
}