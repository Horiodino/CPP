#include <iostream>
#include <string>

using namespace std;
int main()
{
    // string str="WELCOME";
    // for(int i=0;str[i]!='\0';i++)
    // {
    //     if(str[i]>=65 && str[i]<=90) //using this coondition if the char already in lower case
    //     {
    //     str[i]+=+32;
    //     }
    // }

    // lower to upper case


    string str = "welcome ";
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 97 && str[i] <= 122) // using this coondition if the char already in lower case
        {
            str[i] += -32;
        }
    }
    cout << str << endl;
}
