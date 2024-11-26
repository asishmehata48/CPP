#include<iostream>
using namespace std;

//Template function overloaded with template function

template <class t>
t add ( t a, t b)
{
    return (a+b);
}

template <class t1, class t2>
t1 add(t1 a, t2 b)
{
    return (a+b);
}

int main(){
    int a=2, b=3;
    float c= 4.4;
    cout<<"Sum of a and b ="<<add(a,b);
    cout<<"Sum of b and c ="<<add(b,c);
    return 0;
}