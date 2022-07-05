#include <iostream>
#include <fstream>

using namespace std;

class student
{
public:
    string name;
    int roll;
    string branch;

/* friend of this class which manages reading and wrighting of a file using 
oprator overloading*/

/* here student &s is the object that we created refering to the data in main
    like name roll no and branch */

    friend ofstream & operator<<(ofstream &ofs,student &s);
    friend ifstream & operator>>(ifstream &ifs,student &s);
};
/* wrighting the data */
ofstream & operator<<(ofstream &ofs,student &s)
{
    ofs<<s.name<<endl;
    ofs<<s.roll<<endl;
    ofs<<s.branch<<endl;
}

/* reading the data */
ifstream & operator>>(ifstream &ifs,student &s)
{
    ifs>>s.name>>s.roll>>s.branch;
}


int main()
{
    ofstream ofs("student.txt");
    student s1;
    s1.name="john";
    s1.roll=213456;
    s1.branch="CS";
    ifstream ifs("student.txt");
    ifs>>s1; /* read the data from file and store the data in student object */

    cout<<"name "<<s1.name <<endl;
    cout<<"roll "<<s1.roll <<endl;
    cout<<"branh "<<s1.branch <<endl;
}