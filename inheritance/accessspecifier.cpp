#include <iostream>
using namespace std;

// public
// private
// protected

class Base
{
public:
    int a;

private:
    int b;

protected:
    int c;

public:
    void funBase()
    {
        a = 10;
        b = 20;
        c = 30;
    }
};

int main()
{
    Base x;
//     x.a=10;
//     x.b=20;
//     x.c=30;
}