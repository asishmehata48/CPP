#include<iostream>
using namespace std;

class celcius 
{
    float tempr;
    public: celcius()
    {
        tempr = 0;
        
    }
    operator float ()
    {
        float fer;
        fer = (tempr* 9/5) + 32;
        return (fer);
    }
    void gettempr()
    {
        cout<<"Enter temperature in Celsius :";
        cin>>tempr;
    }

};

int main()
{
    celcius cel;
    float k;
    cel.gettempr();
    k = cel;
    cout<<"Temperature in F = "<< k;
    return 0;
}