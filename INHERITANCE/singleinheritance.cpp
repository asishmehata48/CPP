#include<iostream>
using namespace std;

class A
{
    int x , y;

    void show()
    {
        cout<<x<<y;
    }
    public: int z;
    void sum()
    {
        z = x+y;
        cout<<z;
    }
};

class B : public A
{
    int a , b;
    public: void enter()
    {
        cin>> a >> b;
    }
    void display()
    {
        cout<< a <<b;
    }
};

int main()
{
    
    B n;
    n.z = 20;
    n.sum();
    return 0;
}