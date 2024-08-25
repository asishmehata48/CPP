#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Enter radius: ";
    double radius;
    cin >> radius;

    const double pi = 3.14;
    double area = pi * pow(radius, 2);

    cout << "Area: " << area << endl; 
    return 0;
}