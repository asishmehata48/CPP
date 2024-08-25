#include <iostream>
using namespace std;
float area(int, float);
float area(int, float);
int area(int, int);
int area(int);
int main()
{
    int  a, b, c, d, e, f;
    float p, q, r, s, t, u;
    cout << "enter the value" << endl;
    cin >> a >> b >> c >> d >> p >> q >> r;
    cout << "area of circle =" << area(a);
    cout << endl
         << "area of rectangle =" << area(a, b);
    cout << endl
         << "area of cylinder =" << area(c, p);
    cout << endl
         << "area of triangle =" << area(q, r);
    return 0;
}
int area(int a)
{
    return (3.14 * a * a);
}
int area(int m, int n)
{
    return (m * n);
}
float area(int w, float x)
{
    return (2 * 3.14 * w * x);
}
float area(float i, float j)
{
    return (0.5 * i * j);
}