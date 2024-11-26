#include<iostream>
using namespace std;

template<class T>
T abs (T n)
{
    if (n<0)
    return (-n);
    else
    return (n);
}

int main()
{
    int a = -4;
    float b = 9.2;
    cout<<"Absolute value of a : "<<abs(a)<<endl;
    cout<<"Absolute value of b : "<<abs(b)<<endl;
    return 0;
}