#include <iostream>
using namespace std;

// Function template to find the maximum of two values
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

// Class with a template member function
class Comparator {
public:
    // Template member function to compare two values
    template <typename T>
    void displayMax(T a, T b) {
        cout << "Comparing " << a << " and " << b << ", the maximum is: " << findMax(a, b) << endl;
    }
};

int main() {
    Comparator comp;

    // Comparing integers
    int a = 10, b = 20;
    comp.displayMax(a, b);

    // Comparing floating-point numbers
    float x = 5.5, y = 3.3;
    comp.displayMax(x, y);

    // Comparing characters
    char c1 = 'A', c2 = 'Z';
    comp.displayMax(c1, c2);

    // Comparing strings
    string s1 = "Apple", s2 = "Orange";
    comp.displayMax(s1, s2);

    return 0;
}