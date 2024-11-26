#include<iostream>
using namespace std;

//Overloading Function Template
// Wap to add two numbers.

template<class t>
t sum(t a , t b)
{
    t s = a +b;
    return s;
}

int sum (int a , int b)
{
    return (a+b);
}

int main()
{
    int a=2, b=3;
    float c= 4.4;
    cout<<"Sum of a & b "<<sum(a,b);
    cout<<"Sum of b & c "<<sum(b,c);
    return 0;
}