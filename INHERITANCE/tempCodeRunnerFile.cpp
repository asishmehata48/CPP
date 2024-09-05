#include<iostream>
using namespace std;

class A
{
    protected: int x, y;
    public : void assign()
    {
        x = 20; y =10;
    }
};

class B: public A
{
    int s;
    public: void add()
    { s = x+y;
    cout<<"SUM = "<<s<<endl;
    }
};

class C: public A
{
    int t;
    public: void subtract()
    {
        t = y-x;
        cout<<"SUBTRACT = "<<t<<endl;
    }
};

class D : public A
{
    int m;
    public: void multiply()
    {
        m = x*y;
        cout<<"MULTIPLY = "<<m;
    }
};

int main()
{
    B b;
    C c;
    D d;
    b.assign(); b.add();
    c.assign(); c.subtract();
    d.assign(); d.multiply();
    return 0;

}