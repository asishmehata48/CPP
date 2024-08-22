#include<iostream>
using namespace std;
void max(int a, int b, int c);

int main()
{
    int x, y, z;
    cout<<"Enter three numbers: ";
    cin>>x >>y>>z;
    max (x, y, z);
    return 0;
}
void max (int a, int b, int c)
{
    if (a>b && b>c)
    {
        cout<<"Max = "<<a;
    }
    else if(b>a && a>c)
    {
        cout<<"Max = "<<b;
    }
    else if(c>a && a>b)
    {
        cout<<"Max = "<<c;
    }
}