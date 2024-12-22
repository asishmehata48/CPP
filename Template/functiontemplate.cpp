#include <iostream>
#include <string>
using namespace std;

// Function template
template <typename T>
T add(T a, T b) {
    return a + b;
}

// OOP Class
class Calculator {
public:
    // Template member function
    template <typename T>
    void displaySum(T a, T b) {
        cout << "The sum of " << a << " and " << b << " is: " << add(a, b) << endl;
    }
};

int main() {
    Calculator calc;

    // Using template function with integers
    calc.displaySum(10, 20);

    // Using template function with floating-point numbers
    calc.displaySum(5.5, 2.3);

    // Using template function with strings
    calc.displaySum(string("Hello "), string("World!"));

    return 0;
}
