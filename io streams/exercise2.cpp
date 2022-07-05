#include <iostream>
#include <fstream>

int n;

using namespace std;
class Item
{
    public:

    string name;
    int quantity;
    int price;
    Item(){}
    Item(string n,int q,int p)
    {
        name=n;
        quantity=q;
        price=p;
        
    }
    friend ofstream &operator<<(ofstream &ofs, Item &i);
    friend ifstream &operator>>(ifstream &ifs, Item &i);
    friend ofstream &operator<<(ofstream &out, Item &i);
};

int main()
{
    string name;
    int quantity;
    int price;

    Item item;
    cout<<"how many items"<<endl;
    cin>>n;
    Item *list[n];

    for ( int i = 0; i < n; i++)
    {
        cout << "Name : ";
        cin >> name;
        cout << "Quntity : ";
        cin >> quantity;
        cout << "Price : ";
        cin >> price;
        list[i]=new Item(name,quantity,price);
    }

    ofstream ofs("it.txt");    
    for ( int i = 0; i < n; i++)
    {
        ofs<<*list[i];
    }
    ifstream ifs("it.txt");
    for(int i=0;i<n;i++)
    {
        ifs>>*list[i];
    }

}

ofstream & operator<<(ofstream & ofs, Item & i)
{
    ofs<<i.name<<endl;
    ofs<<i.quantity<<endl;
    ofs<<i.price<<endl;
    return ofs;
}
ifstream & operator>>(ifstream & ifs, Item & i)
{
    ifs >> i.name >> i.quantity >> i.price;
    return ifs;
}
ostream & operator<<(ostream & out, Item & i)
{
    out<<i.name<<endl;
    out<<i.quantity<<endl;
    out<<i.price<<endl;

    return out;
}