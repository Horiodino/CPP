#include <iostream>
using namespace std;
int main()
{
    try
    {
        throw 4;
    }
    catch(int e)
    {
        cout<<"int catch"<<endl;
    }
    
    catch(float e)
    {
        cout<<"double catch"<<endl;
    }
    catch(...)
    {
        cout<<"All CATCH"<<endl;
    }
    
}