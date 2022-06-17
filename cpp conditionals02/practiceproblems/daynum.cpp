#include<iostream>

using namespace std;

void DayName(int day)
{
    
    //Display day name in 3 letters using else if ladder
    if(day==1){
        cout<<"sun"<<endl;
    }
    else if(day==2){
        cout<<"mon"<<endl;
    }
    else if(day==3){
        cout<<"tue"<<endl;
    }
    else if(day==4){
        cout<<"wed"<<endl;
    }
    else if(day==5){
        cout<<"thu"<<endl;
    }
    else if(day==6){
        cout<<"fri"<<endl;
    }
    else{
        cout<<"sat"<<endl;
}