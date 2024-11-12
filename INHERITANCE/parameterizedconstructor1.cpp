#include<iostream>
using namespace std;

class base{
    protected: int mark1, mark2;
    public: base(int a, int b)
    {
        mark1 = a;
        mark2 = b;
    }
};

class derived: public base{
    int total;
    public: derived() : base (0,0)
    {
        total = 0;
    }
    int calculate()
    {
        cout<<"total mark ="<<mark1+mark2;
    }
};

int main()
{
    derived dl;
    dl.calculate();
    return 0;
}
