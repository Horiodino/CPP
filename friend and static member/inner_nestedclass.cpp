#include <iostream>
using namespace std;

/* inner class ->>  wrighting a class inside a another class */

class outer
{
    public :
    int a=10;
    static int b;

    void fun()
    {
        i.show();

    }

    /* inner class can only acess the members of only static member */

    class inner
    {
        public: 
        int x=25;
        void show()
        {
            cout<<"SHOW"<<endl;
            cout<</*a*/  " ";   /* non static member /variable */
        }
    };
    inner i;
};

int main()
{
    outer::inner::show;

}