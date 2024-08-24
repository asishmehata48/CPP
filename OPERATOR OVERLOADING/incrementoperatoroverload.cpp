#include<iostream>
using namespace std;
class counter
{
    int count;
    public: counter()
    {
        count = 0;
    }
    void operator ++(int);
    void display()
    {
        cout<<"Count = "<<count<< endl;
    }
};
void counter:: operator ++(int)
{
    count ++;
}
int main()
{
    counter c;
    cout<<"Initial value of count = "<<endl;
    c.display();
    c++;
    c++;
    cout<<"After Increment count = "<<endl;
    c.display();
    return 0;
}