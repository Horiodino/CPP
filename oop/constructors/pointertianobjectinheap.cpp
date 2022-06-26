#include <iostream>
using namespace std;

class Rectengle
{
public :
    int length;
    int breath;
    int area()
    {
        return length*breath;
    }
    int perameter()
    {
        return 2*(length+breath);
    }

};
int main()
{
    //how to have a pointer on object rectengle
    Rectengle r1;
    Rectengle *ptr;
    ptr=&r1;
    ptr->length=20;
    ptr->breath=10;
    cout<<"The area is " <<ptr->area()<<endl;
    cout<<"The perimeter is "<<ptr->perameter()<<endl;

    //creating an object in heap
    Rectengle *ptr=new Rectengle;

    // ptr->length=20;
    // ptr->breath=10;
    // cout<<"The area is " <<ptr->area()<<endl;
    // cout<<"The perimeter is "<<ptr->perameter()<<endl;


}