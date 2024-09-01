#include<iostream>
#include<math.h>
using namespace std;

class polar
{
    float radius;
    int angle;
    public: polar()
    {
        radius = 0.0;
        angle = 0;
    }
    polar (float rad, int ang)
    {
        radius = rad;
        angle = ang;
    }
    float return_rad()
    {
        return radius;
    }
    float return_ang()
    {
        return angle;
    }
    void display ()
    {
        cout<<"radius = "<<radius<<"and angle = "<<angle;
    }
};

class cartesian
{
    float xCo, yCo;
    public: cartesian()
    { xCo = 0.0 , yCo = 0.0 ; }
    cartesian(polar p)
    {
        xCo = p.return_rad() * cos (p.return_ang());
        xCo = p.return_rad() * sin (p.return_ang());
    }
    void display()
    {
        cout<<"xCo = "<<xCo<<"and yCo = "<<yCo;
    }
};

int main()
{
    polar pol(2.5, 60);
    cartesian cart;
    cart = pol;
    cart.display();
    return 0;
}