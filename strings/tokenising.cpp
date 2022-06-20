#include <iostream>
#include <cstring>
using namespace std;
int main()
{

    // strtol(str1) converts string into intigers
    // strtof    converts string into float;

    // char s1[10]="356";
    // char s2[10]="54.78";
    // long int x = strtol(s1,NULL,10); // we use 10 here because we use decimal
    // //  number system either you can use binary or hexadecimal
    // float y = strtof(s2,NULL);
    // cout<<x<<endl<<y<<endl;



    // strtok(str1,"=;") tokenise a string or deliminator
    char A1[20] ="x=10;y=20;z=30";

    // cout << strtok(A1, "=;") << endl; it will only print onetime so we use

    // loop to do it repetedly until its NULL

    char *token = strtok(A1, ";");
     while (token != NULL)
    {
        cout << token << endl;
        token=strtok(NULL,";");
        }
        return 0;
}