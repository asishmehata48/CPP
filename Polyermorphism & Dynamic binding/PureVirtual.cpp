#include <iostream>
using namespace std;

class dimension
{
    protected: int length , breadth ;
    public : dimension(int l , int b)
    {
        length = l ;
        breadth = b ;
    }
    virtual void area() = 0 ;
};

class square : public dimension
{
    public : square(int l) : dimension(l , l)
    {}
    void area ()
    {
        cout<< " \nSquare area = "<<length*breadth ;
    }
};

class Rectangle : public dimension
{
    public:Rectangle(int l ,int b) : dimension(l,b)
    {}
    void area() 
    {
        cout << "\nRectangle area = "<<length*breadth ;
    }
};

int main() {
    cout << "Abstract class and Pure virtual function !!" <<endl;

    square s(10);
    Rectangle r(20,30);

    dimension* dptr[] = {&s,&r};
    {
        for (int i =0 ; i<2 ;i++)
        {
            dptr[i] -> area();
        }
    }
    return 0;
}