#include <iostream>
using namespace std;

class rectengle
{
    public:
    int length;
    int breath;
    int area()
    {
        return length*breath;
    }
    int parameter()
    {
        return 2*(length+breath);
    }
};
int main()
{
    rectengle r1;
    r1.length=10;
    r1.breath=5;
    cout<<r1.area()<<endl;
    cout<<r1.parameter()<<endl;


}