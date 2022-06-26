#include <iostream>
using namespace std;
int i=0;

int search(int A[],int N , int key)
{
    for( i=0;i<N;i++)
    {
        if (key==A[i])
        {
    cout<<"The Key Is on index "<< i <<endl;
    return 0;
            
        }
    }
}

int main()
{
    cout<<"this program is for finding the index of a pirticular char or int by user "<<endl;
    int A[]={1,2,3,4,5,6,7,8,9,10};
    cout<<"Enter The Number You Want To Find "<<endl;
    int key;
    cin>>key;
    int index = search(A,11,key);

    
    if (key!=A[i])
    {
           cout<<" Key Not Founde "<<endl;
           return 0;
    }
    
 

}