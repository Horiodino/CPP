#include <iostream>
using namespace std;
// preprocessor are the commands to the compiler before compiling 

#define pi 3.1425
// #define pi  -- here pi is already define but if its not define then

#ifdef pi
   #define pi 3
#endif


#define max(x,y) (x>y?x:y)

#define msg(x) #x // #x means in double coats

int main()
{
    cout<<pi<<endl;
    cout<<max(10,12);
}