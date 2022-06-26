#include <iostream>
using namespace std;

class Rectengle
{
private:
    int length;
    int breath;

public:
    Rectengle();
    Rectengle(int l, int b);
    Rectengle(Rectengle &r);
    int getlength();
    int getbreath();
    void setlength(int l);
    void setbreath(int b);

    int area();
    int perimeter();
    bool issquare();
    Rectengle();
};

Rectengle::Rectengle()
{
    length=1;
    breath=1;
}
Rectengle::Rectengle(int l,int b)
{
    length=l;
    breath=b;
}
Rectengle::Rectengle(Rectengle &r)
{
    length=r.length;
    breath=r.breath;
}




int main ()
{

}