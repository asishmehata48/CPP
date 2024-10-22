#include <iostream>
using namespace std;

class A {
    int x, y;

public:
    int z;

    void setValues(int a, int b) {
        x = a;
        y = b;
    }

    void sum() {
        z = x + y;
        cout << z << endl;
    }
};

class B : public A {
    int a, b;

public:
    void enter() {
        cout<<"enter the values of a and b";
        cin >> a >> b;
        setValues(a, b); // Set x and y using values from B
    }

    void display() {
        cout << a << " " << b << endl;
    }
};

int main() {
    B n;
    n.enter();  // Input for a and b, which sets x and y
    n.sum();    // Calculate and display the sum
    return 0;
}
