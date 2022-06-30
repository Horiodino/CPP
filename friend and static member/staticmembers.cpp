#include <iostream>
using namespace std;

  /* static variables of datamembers  belongs to a class it doesnot belongs too an object
and all the objects can share it */

  /* static data function can acess only static data members of a class it canot acess 
  non static data members */

  class test
  {
    public:
    int a;
     static int counte;

        test()
        {a=10;
        counte++;
        }

        static int getcounte()
        {
            a++; /*its error because  static data function can acess only static data members of a class it canot acess 
  non static data members */
            return counte;
        }
  };

  int test::counte=0;

int main()
{
    test t1;
    test t2;
    cout<<t1.counte<<endl<<t2.counte<<endl;
    /* from here you can see that both t1 and t2 object have same counte so the static member
     or datatype  have same counte variable which is been acessed from both objects */

     cout<<test::getcounte()<<endl; /* we can call static members also using class name also*/

}