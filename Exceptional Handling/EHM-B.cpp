#include<iostream>
using namespace std;

void calculate()
{
    cout<<"Enter the value of a & b :";
    int a , b;
    cin>>a>>b;
    if ( b==0)
    throw a;
    cout<<"Quotient ="<<a/b<<endl;
}

int main()
{
    try
    {
        calculate();
    }
    catch(int c)
    {
        cout<<"\n Division by zero is indeterminate"<<endl;
    }
    cout<<"Program Ended";
    return 0;
}