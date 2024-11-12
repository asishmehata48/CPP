// constructor invocation in multiple inheritance
//when base class have default constructor

#include<iostream>
using namespace std;

class base1
{
    public: base1()
    {
        cout<<"Base1 constructed";
    }
};

class base2
{
    public: base2()
    {
        cout<<"Base2 constructed";
    }
};

class derived: public base1, public base2{
    public: derived(){
    cout<<"Derived class derived";
    }
};

int main()
{
    derived d;
    return 0;
}