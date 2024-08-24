// add two integers using DMA

#include <iostream>
using namespace std;

int main()
{
    int *pa;  
    int *pb; 
    int *psum;
    pa = new int;
    pb= new int;
    psum= new int;
    cout<<"Enter the two integers: "<<endl;
    cin>>*pa>>*pb;
    *psum = *pa + *pb;
    cout<<"Sum is: "<<*psum;
    delete pa;
    delete pb;
    return 0;
}