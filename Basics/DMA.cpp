#include<iostream>
using namespace std;

int main()
{
    int *pa, *pb, *psum;
    pa= new int;
    pb= new int;
    psum= new int;
    cout<<"Enter the values of  a and b";
    cin>>*pa>>*pb;
    *psum= *pa + *pb;
    cout<<"sum= "<<*psum;
    delete pa;
    delete pb;
    delete psum;
    return 0;
}