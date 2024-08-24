#include<iostream>
using namespace std;

class student
{
    private: int roll_no;

    public: void enter()
    {
        cout<<"Enter roll no "<<endl;
        cin>>roll_no;
    }
    void display()
    {
        cout<<"Roll no = "<<roll_no;
    }
};

int main()
{
    
    student a; //object creation
    a.enter(); // function call using dot operator
    a.display();
    return 0;
}