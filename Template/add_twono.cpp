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

int main(){
    int a=5, b=7;
    float c= 3.2, d = 5.7;
    cout<<"Sum of a and b "<<sum(a,b)<<endl;
    cout<<"Sum of c and d "<<sum(c,d);
    return 0;
}