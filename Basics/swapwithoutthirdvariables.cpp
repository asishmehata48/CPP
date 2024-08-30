#include<iostream>
 using namespace std;
 int main()
 {
    int a,b;
    cout<<"Enter value for num1 & num2:";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping value of a:"<<a;
    cout<<"After swapping value of b:"<<b;
    return(0);
 }