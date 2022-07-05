#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    /*for reading the file */
    ifstream ifs("my.txt");  

    /* another way to open afile */

    /*
    ifstream ifs;
    ifs.open("my.txt");
    */

/* to check weather the file is opened or not */

    if(ifs)cout<<"File is Opened";  

    /* another methode
    if(ifs.is_open())cout<<"File is Opened";
    */

    string name,branch;
    int rollno;
    ifs>>name>>rollno>>branch;
    ifs.close();

    // printing the data in my.txt file 
    cout<<name<<endl;
    cout<<rollno<<endl;
    cout<<branch<<endl;



}