#include <iostream>
using namespace std;



/*acess specifier --private
                --public      
                --protected
 */
class parent
{
private:
    int a;

protected:
    int b;

public:
    int c;

    void funparent()
    {
        a = 10;
        b = 20;
        c = 30;
    }
};

class child : private parent
{
    public:
    void funchild()
    {
        //  a = 10;
         b = 20;
         c = 30;
    }
};

class grandchild:public child
{
    void fungrandchild()
    {
        // a=10;
        // b=20;
        // c=30;
    }
};
int main()
{
    child c;
    // c.a=10;
    // c.b=20;
    // c.c=30;
}