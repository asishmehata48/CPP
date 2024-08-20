#include<iostream>
using namespace std;
class complex
{
    float x,y;
    public: complex()
    {x= 0.0, y=0.0;}
    complex(float a, float b)
    {x=a, y=b;}
    complex operator +(complex);
    void display();
};
complex complex:: operator +(complex c)
{
    complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return (temp);
}
void complex:: display()
{
    cout<<x<<"+j"<<y<<endl;
}
int main()
{
    complex c1(3.5, 7.5), c2(9.2, 10.5),c3;
    c3 = c1 + c2;
    c3.display();
    return 0;
}
