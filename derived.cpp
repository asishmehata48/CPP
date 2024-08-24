#include<iostream>
using namespace std;

class Base {  // Changed 'Class' to 'class'
public:
    virtual void print() { cout << "Base"; }
};

class Derived : public Base {
public:
    void print() { cout << "Derived"; }
};

int main()
{
    Base* b = new Derived();
    b->print();
    delete b;
    return 0;
}
