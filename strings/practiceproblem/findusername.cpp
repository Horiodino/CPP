#include <iostream>
#include <string>

using namespace std;
int main()
{
    string email = "jo*n123@email.com";
    int i = (int)email.find('@');
    string username = email.substr(0, i);
    for(int i=0;username[i]!='\0';i++)
    {
        if (username[i]=='*')
        {
            cout<<"You cant use special char in username";
            return 0;
        }
        
    }
    cout <<"the username is" << username << endl;

    
    
}