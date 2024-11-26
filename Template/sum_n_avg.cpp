#include<iostream>
using namespace std;

template<class t1, class t2>
void calc (t1 a[], int size, t2 &sum, t2 &avg)
{
    for (int i=0; i<size; i++)
    {
        sum+=a[i];
    }
    avg = sum/size;
}

int main(){
    int a[]= {1, 2, 3, 4, 5};
    float avg= 0.0, sum = 0;
    calc (a, 5, sum, avg);
    cout<<"Sum= "<<sum<<"Avg="<<avg;
    float b[]= {1.1, 2.2, 3.3, 4.4, 5.5};
    float sb= 0.0, ab= 0.0;
    calc(b, 5, sb, ab);
    cout<<"Sum and avg"<<sb<<ab;
    return 0;
}