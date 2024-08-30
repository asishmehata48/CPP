#include<iostream>
using namespace std;
 int main()
 {
    int n, remainder, sum=0 ;
    cout<<"Enter an integer";
    cin>>n;
    while(n!=0)
    {
        remainder=n%10;
        sum=sum+remainder;
        n=n/10;
    }
    cout<<"Sum of digits of entered number="<<sum<<endl;
    return 0;
 }