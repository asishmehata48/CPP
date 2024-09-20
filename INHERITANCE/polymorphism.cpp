#include <iostream>
using namespace std;

// Base class with a virtual function
class Shape {
public:
    virtual void draw() {  // Virtual function
        cout << "Drawing a shape." << endl;
    }
};

// Derived class overriding the virtual function
class Circle : public Shape {
public:
    void draw() override {  // Override base class function
        cout << "Drawing a circle." << endl;
    }
};

// Derived class overriding the virtual function
class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a square." << endl;
    }
};

int main() {
    Shape* shape;
    Circle circle;
    Square square;

    shape = &circle;
    shape->draw();  // Calls Circle's draw function

    shape = &square;
    shape->draw();  // Calls Square's draw function

    return 0;
}
