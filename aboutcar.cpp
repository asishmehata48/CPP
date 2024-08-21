#include<iostream>
using namespace std;

class car
{
    public: 
    string brand;
    string model;
    string  year;
};

int main()
{

    car c1;
    c1.brand = "BMW";
    c1.model = "X6";
    c1.year = "1996";


    car c2;
    c2.brand = "LAMBO";
    c2.model = "X9";
    c2.year = "1920";


    cout<<c1.brand<<"Name "<<c1.model<<"model "<<c1.year<<"year "<<endl;
    cout<<c2.brand<<"Name "<<c2.model<<"model "<<c2.year<<"year ";
    return 0;
}