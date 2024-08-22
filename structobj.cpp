#include<iostream>
using namespace std;
struct student
{
    char name[20];
    int roll;
    float marks;
}s1;
int main()
{
    cout<<"Enter the name,roll,marks";
    cin>>s1.name>>s1.roll>>s1.marks;
    cout<< "name:"<<s1.name<<" roll:"<<s1.roll<<" Marks:"<<s1.marks;
    return 0;
}