#include <iostream>
using namespace std;

class Rectengle
{
    private:
    int length;
    int breath;

    public:
    int setLB(int a,int b) // set length breath
    {
        length =a;
        breath=b;
        return length,breath;
    }

    int area()
    {
        return length*breath;
    }
    int perimeter()
    {
        return 2*(length+breath);
    }
};


int main()
{
    Rectengle r1;
    r1.setLB(3,4);
    cout<<r1.area();
    cout<<endl;

}