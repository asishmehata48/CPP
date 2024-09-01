#include<iostream>
using namespace std;

class Time
{
    int hh, mm, ss;
    public: Time()
    {
        hh = 0;
        mm = 0;
        ss = 0;
    }
    Time (int s)
    {
        hh = s/3600;
        s = s%3600;
        mm = s/60;
        ss  = s%60;
    }
    void show()
    {
        cout<<hh<<":"<<mm<<":"<<ss<<endl;
    }
};

int main()
{
    Time t1, t2;
    t1 = 207040;
    t2 = Time(308034);
    cout<<"Time t1 = "; t1.show();
    cout<<"Time t2 = "; t2.show();
    return 0;
}