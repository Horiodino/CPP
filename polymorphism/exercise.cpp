#include <iostream>
using namespace std;

class Shape
{
    public:
    virtual float area()=0; // pure polumorphism
    virtual float perimeter()=0;
};

class Rectengle:public Shape
{
    private:
    int lenght;
    int breath;

    public:

    Rectengle (int l=1, int b=1)
    {lenght=l;breath=b;}

    float area(){return lenght*breath;}

    float perimeter(){return 2*(lenght+breath);}
};

class circle :public Shape
{
    private:
    int pi=3.14;
    int radius;

    public:

    circle(int r=1){radius=r;}

    float area()
    {return pi*radius*radius;}

    float perimeter()
    {return 2*pi*radius;}
};


int main()
{
    Shape *p=new Rectengle(10,5);
    cout<<"Area of Rectengle is "<<p->area()<<endl;
    cout<<"Perimeter of Rectengle is "<<p->perimeter()<<endl;

    p=new circle(5);
    cout<<"Area of circle is "<<p->area()<<endl;
    cout<<"Perimeter of circle is "<<p->perimeter()<<endl;

}