#include<iostream>
using namespace std;
class space
{
    int x,y,z;
    public: space()
    {
        x=0;
        y=0;
        z=0;
    }
    space (int a, int b, int c);
    void display ();
    void operator -();
};
space:: space (int a, int b, int c)
{
    x=a; y=b; z=c;
}
void space:: display()
{
    cout<<"x y and z = "<<x<<y<<z;
}
void space:: operator -()
{
    x=-x;
    y=-y;
    z=-z;
}
int main()
{
    space s1, s2(10, -7, -13);
    cout<<"s2= "; s2.display();
    s2;
    cout<<"-s2= "; s2.display();
    return 0;
}