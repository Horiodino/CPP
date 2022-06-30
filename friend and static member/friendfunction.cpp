#include <iostream>
using namespace std;

// by using friedn we can acess private members of that class in a function 
// or in a other class but in class we need to declare the class before using it

class your;
class my
{
    private :
    int a;
    public:
    friend your;
};

class your
{
    public:
    my m;
    void fun1()
    {
        cout<<m.a;
    }
};

int main()
{

}