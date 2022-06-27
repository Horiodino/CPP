#include <iostream>
using namespace std;

class complex
{
    private:
    int real;
    int imaginary;

    public:
    complex (int r, int i)
    {
        real=r;
        imaginary=i;
    }
    void display()
    {
        cout<<real<<"  "<<imaginary<<endl;
    }
    friend complex operator+ (complex c1, complex c2);
};
complex operator+ (complex c1, complex c2)
{
    
    complex temp;
    temp.real=c1.real+c2.real;
    temp.imaginary=c1.imaginary+c2.imaginary;
    return temp;

};

int main()
{
    complex c1(2,6);
    complex c2(3,6);
    complex c3=c1+c2;
    c3.display();

}