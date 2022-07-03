#include <iostream>
using namespace std;

/* namespaces are used for removing nameconflict when
 we write the same name classes or functions */
namespace first
{
void fun()
{
    cout<<"fun 1"<<endl;
}
}

namespace second {
void fun()
{
    cout<<"fun 2"<<endl;
}
}

int main()
{
    first::fun();
    second::fun();
}