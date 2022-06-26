#include <iostream>
using namespace std;

//generic function or function templates (read 29 line of code !!)

int maxin(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
float maxin(float a, float b)
{
     if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

// the work of both function is same but the data type is diffrent so they are overloade 
// why t write the function two types if the function works same
//so we can write a one function for any datatype by using function template
//we just simply  use (T) at the place of data  so when we enter any number it will detect
// automatically that data type but if we use difftent like  maxin(12.3f,33) here 12.3f  is float and  33 is int so 
//its not valid we use same type of datatype as input

template <class T>
T maxin (T a, T b){ 
     if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}


int main()
{
    // maxin(3.1f,22);   not valid
    maxin(33,66);

    return 0;
}