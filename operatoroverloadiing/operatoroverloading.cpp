#include <iostream>
using namespace std;

class complex
{
private:
    int real;
    int imaginary;

public:
    complex(int r = 0, int i = 0)
    {

    }
    complex operator+(complex c)
    {
        complex temp;
        temp.real=real+c.real;
        temp.imaginary=imaginary+c.imaginary;
        return temp;
    }
};

int main()
{
    complex c1(3,6);
    complex c2(3,6);
    complex c3 =c3+c2;

}