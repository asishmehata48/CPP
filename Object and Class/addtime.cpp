#include<iostream>
#include<conio.h>
using namespace std;

class time
{
    int hours, minutes;
    public: void get_time(int h, int m)
    {
        hours = h;
        minutes = m;
    }
    void display()
    {
        cout<<hours <<"hour and ";
        cout<<minutes<<"minutes "<<endl;
    }
    void sum(time, time);
};
void time:: sum (time t1, time t2)
{
    minutes = t1.minutes + t2.minutes;
    hours = minutes /60;
    minutes = minutes % 60;
    hours = hours + t1.hours + t2.hours;
}

int main()
{
    time t1, t2, t3; //Object Creation

    t1.get_time(8, 50);
    t2.get_time(2, 40);
    t3.sum( t1, t2);
    t3.display();
    getch();
}