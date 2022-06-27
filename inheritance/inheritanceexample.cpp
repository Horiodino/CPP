#include <iostream>
using namespace std;

class Rectengle
{
private:
    int length;
    int breath;

public:
    // Rectengle();
    // Rectengle(int l, int b);
    void setlength(int l)
    {
        length = l;
    }
    void setbreath(int b)
    {
        breath = b;
    }
    int area()
    {
        return length * breath;
    }
    int perimeter()
    {
        return 2 * (length + breath);
    }
};

class cuboide : public Rectengle
{
private:
    int hight;

public:
    cuboide(int h)
    {
        hight = h;
    }
    void sethight(int a)
    {
        hight = a;
    }
    int volume()
    {
        return hight * area();
    }
};

int main()
{
    cuboide c(5);
    c.setbreath(5);
    c.setlength(5);
    cout << c.volume();
    cout << endl;
}