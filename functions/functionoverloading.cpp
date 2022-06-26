#include <ostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}
float sum(float a, float b)
{
    return a + b;
}

// int sum(float a, float b){   ---- it through error becauses the return type (float ,int etc.)
//  doesnot but the  matter arguments matter  

// having any problem !? ask me 

// }
int main()
{
    sum(5, 6);
    sum(10.0f,10.0f);
}