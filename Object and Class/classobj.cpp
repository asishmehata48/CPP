#include<iostream>
using namespace std;
class student
{
    private: 
    char name[20];
    int roll;
    float marks;

    public: void input()
    {
        cout<<"Enter name, roll and marks :";
        cin>>name>>roll>>marks;
    }
    void display()
    {
        cout <<"Name "<<name<<endl<<"Roll "<<roll<<endl<<"Marks "<<marks;
    }
}s1;

int main()

{
    s1.input();
    s1.display();
    return 0;
}