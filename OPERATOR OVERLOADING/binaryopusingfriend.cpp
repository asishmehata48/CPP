#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor to initialize complex number
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Friend function to overload the binary '+' operator
    friend Complex operator+(const Complex& c1, const Complex& c2);

    // Function to display the complex number
    void display() const {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i" << endl;
        else
            cout << " - " << -imag << "i" << endl;
    }
};

// Definition of the friend function to overload '+'
Complex operator+(const Complex& c1, const Complex& c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex c1(3.4, 5.6);
    Complex c2(1.2, 3.8);

    Complex c3 = c1 + c2;  // Using the overloaded '+' operator

    cout << "c1 = "; c1.display();
    cout << "c2 = "; c2.display();
    cout << "c3 = c1 + c2 = "; c3.display();

    return 0;
}
