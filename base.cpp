#include<iostream>
using namespace std;



class Base {
public:
void show() { cout<< "Base" << endl; }
};
    class Derived : public Base {
    public:
    void show() { cout << "Derived" << endl; }
};
int main()
{
    Base* b;
    Derived d;
    b = &d;
    b->show();
    return 0;
}