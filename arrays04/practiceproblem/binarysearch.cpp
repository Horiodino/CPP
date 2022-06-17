#include <iostream>
using namespace std;
int main()
{
    int A[] = {3, 4, 5, 6, 7, 8, 9};
    int l = 0, h = sizeof(A)/sizeof(A[0]), mid; // l is lowest and h is highest
    int key=4;
    while (l < h)
    {
        mid = l + h / 2;
        if (key == A[mid])
        {
            cout << "yes we find it" << endl;
            cout<<A[mid];
            return 0;
        }
        else if (key > mid)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1; // while h is less then mid
        }
    }
    
}