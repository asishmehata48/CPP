#include<iostream>
using namespace std;

class Time
{
    int hh, mm, ss;
    public: Time()
    {
        hh= 0;
        mm = 0;
        ss = 0;
    }
    void operator() (int h, int m, int s)
    {
        hh = h; mm= m; ss=s;
    }
    void show()
    {
        cout<<"Time = "<<hh<<":"<<mm<<":"<<ss;
    }
};

int main()
{
    Time t1;
    t1 (5, 30, 55);
    t1.show();
    return 0;
}