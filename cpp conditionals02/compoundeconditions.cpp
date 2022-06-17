#include<iostream>
using namespace std;
int main(){
    int hour,age;
    cout<<"enter the hours 1 to 24"<<endl;
    cin>>hour;
    if (hour>=9 && hour<=18)
    {
        cout<<"Its an working hour";
    }
    else{
        cout<<"yup you are free";
    }

    // practice
    cout<<"enter your age";
    cin>>age;
    if (age>=12 && age<=50)
    {
        cout<<"you are young";
    }
    else{
        cout<<"you are old :(";
    }
    if(age<=12){
        cout<<"offer eligible";
    }
    else{
        cout<<"you are not eligible for this offer";
    }
}