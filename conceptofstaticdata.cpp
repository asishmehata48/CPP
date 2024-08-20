#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class item
{
    static int count;
    float price;
    public: void getdata(float a)
    {
        price = a;
        count++;
    }
    void showcount()
    {
        cout<<"Count = "<< count <<endl;
    }
};
int item:: count; 

int main()
{
    item i1, i2, i3;
    i1.showcount();
    i2.showcount();
    i3.showcount();
    i1.getdata(3.78) ;
    i2.getdata(4.68);
    i3.getdata(1.23);
    cout<<endl<<" After reading Data "<< endl;
    i1.showcount();
    i2.showcount();
    i3.showcount();
    getch();
}