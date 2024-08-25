#include <iostream>
using namespace std;
struct student
{
    char name[20];
    int roll;
    float marks;
} s1;
int main()
{
    cout << "enter name, roll and marks: ";
    cin >> s1.name >> s1.roll >> s1.marks;
    cout  <<s1.name <<endl<< s1.roll <<endl<< s1.marks;
    return 0;
}