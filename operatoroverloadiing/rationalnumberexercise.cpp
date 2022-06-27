#include <iostream>
using namespace std;

class Rational
{
    private:
    int p;
    int q;

    public:
    // void setp(int p)
    // {
    //     this->p=p;
    // }
    // void setq(int q)
    // {
    //     this->q=q;
    // }
    Rational(int p=0,int q=0)
    {
        this->p=p;
        this->q=q;

    }
    Rational operator+(Rational r)
     {
        Rational t;
        t.p=p*r.q+this->q*r.p;
        t.q=this->q*r.q;
        return t;
    }
   
};

int main()
{
    Rational r1(3,4);
    Rational r2(3,4);
    Rational r3=r1+r2;
}