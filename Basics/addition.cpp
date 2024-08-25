#include <iostream>
using namespace std;
namespace student
{
    int display()
    {
    
        cout << "hii";
    }
}
int add(int a, int b)
{
    int c;
    c = a+b;
    return (c);
}
int main()
{
    int p, q, r;
    cout<< "Enter the values to add :"<<endl;
    cin >> p >> q;
    r = add(p, q);
    cout << r <<endl;
    student:: display();
    return 0;
}