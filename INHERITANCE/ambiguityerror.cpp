#include<iostream>
using namespace std;

class one
{
    public: void display()
    {
        cout<<"Class One "<< endl;
    }
};

class two
{
    public: void display()
    {
        cout<<"Class Two";
    }
};

class derived : public one, public two
{
    public: void display()
    {
        cout<<"Class Derived ";
    }
};

int main()
{
    derived d;
//  d.display();   ambuiguity error occurs  
    d.one :: display();
    d.two :: display();
    return 0;
}