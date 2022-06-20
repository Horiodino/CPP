#include <iostream>
#include <string>

using namespace std;
int main()
{
    int vovel = 0,space=0,consonent=0;
    string str="how many words";
    for(int i=0;str[i]=!'\0';i++)
    {
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' ||str[i]=='0' ||str[i]=='u')
        {
            vovel++;
        }
        else if (str[i]==' ')
        {
            space++;
        }
        else{
            consonent++;
        }
        
    }
        cout<<vovel<<endl;
        cout<<space<<endl;
        cout<<consonent<<endl;

}