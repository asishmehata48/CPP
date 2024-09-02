#include<iostream>
using namespace std;

class vector 
{
    private: int a[10];
    float avg;
    public: void getdata();
    friend void average (vector);
};

void vector ::getdata()
{
    for (int i = 0; i< 10 ; i++)
    cin>> a[i];
}

void average (vector v1)
{
    float sum = 0;
    for (int i = 0; i<10; i++)
    {
        sum += v1.a[i];
    }
    v1.avg = sum/10;
    cout<< "Average = "<< v1.avg;
}

int main()
{
    vector obj;
    cout<< "Enter 10 integers : ";
    obj.getdata();
    average(obj);
    return 0;
}
