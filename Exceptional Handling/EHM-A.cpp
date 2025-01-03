#include <iostream>
using namespace std; 

int main()
{
    int mom_age, son_age;
    cout<<"Enter the age of :"<<endl;
    try
    {
        cout<<"\n Mom:";
        cin>>mom_age;
        cout<<"\n son: ";
        cin>>son_age;
        if (son_age > mom_age)
        throw 20;
        cout<<"Age difference ="<<mom_age-son_age;
    }
    catch(int k)
    {
        cout<<"Age of son can't be greater than the age of mom"<<endl;
    }
    cout<<"the end";
    return 0;
}