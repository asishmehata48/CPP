#include<iostream>
using namespace std;

class student 
{
    protected: int roll;
    char name[20];

    public: void get_data()
    {
        cout<<"Enter name and roll :";
        cin>>name>>roll;
    }
    void put_data()
    {
        cout<<name<<endl<<roll<<endl;
    }
};

class test : public student
{
    protected: float sub1, sub2;
    public: void get_marks(float x, float y)
    {sub1 = x; sub2 = y;}
    void put_marks()
    {
        cout<<sub1<<endl<<sub2;
    }
};

class result : public test
{
    float total;
    public: void display()
    {
        student:: put_data();  
        test:: put_marks();
        total = sub1 + sub2;
        cout<<endl <<"Total = "<<total;
    }
};

int main()
{
    result r;
    r.get_data();
    r.get_marks(60.5, 90.5);
    r.display();
    return 0;
}