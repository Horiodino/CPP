#include <iostream>
using namespace std;

class complex
{
    private:
    int real;
    int imaginary;
    public:
    complex(int r,int i)
    {
        real=r;
        imaginary=i;
    }
  friend ostream & operator<<(ostream &o, complex &c1);
};
ostream & operator<<(ostream &o, complex &c1)
    {
        o<<c1.real <<" i"<<c1.imaginary<<endl;
        return o;// return not necessary
    }

int main()
{
    complex c1(4,4);
    cout<<c1;

    

}