#include<iostream>
using namespace std;

class base {
    public: base()
    {
        cout<<" \n Default constructor";
    }
    ~ base()
    {
        cout<<"\n Base class destructor";
    }
};

class derived: public base{
    public: derived()
    {
        cout<<"\n Derived class Constructor";
    }
    ~ derived()
    {
        cout<<"\n Derived class Destructor";
    }
};

int main()
{
    {
        derived dl;
    }
    return 0;
}