#include <iostream>
using namespace std;
class space {
    private:
    int x, y, z;
    public:
    // Default constructor
    space() {
        x = 0;
        y = 0;
        z = 0;
    }
    // Parameterized constructor
    space(int a, int b, int c);
    // Overload unary minus operator
    friend void operator-(space &);
    // Function to display the values
    void display();
};
// Definition of parameterized constructor
space::space(int a, int b, int c) {
    x = a;
    y = b;
    z = c;
}
// Definition of display function
void space::display() {
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
}
// Definition of unary minus operator overloading
void operator-(space &s) {
    s.x = -s.x;
    s.y = -s.y;
    s.z = -s.z;
}
int main() {
    space s1, s2(10, -7, -13);
    
    // Display initial values of s2
    cout << "s2 = ";
    s2.display();
    
    // Apply unary minus operator on s2
    -s2;
    
    // Display values after applying unary minus
    cout << "-s2 = ";
    s2.display();
    
    return 0;
}