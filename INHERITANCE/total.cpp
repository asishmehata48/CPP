#include<iostream>
using namespace std;

class A 
{
    protected: int x;
    public: void assignx()
    {
        x=20;
    }
};

class B : public A
{
    protected: int y;
    public: void assigny()
    { y = 40;}
};

class C : public B
{
    protected: int z;
    public: void assignz()
    { z = 80; }
};

class D 
{
    protected: int k;
    public: void assignk()
    { k = 60; }
};

class M : public C, public D
{
    private: int a , total;
    public: void show()
    {
        total = x+y+z+k;
        cout<<" Total = "<<total;
    }
};

int main()
{
    M s;
    s.assignx();
    s.assigny();
    s.assignz(); s.assignk();
    s.show();
    return 0;
}
