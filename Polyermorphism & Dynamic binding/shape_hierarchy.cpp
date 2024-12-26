#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void area() const { // Virtual function
        cout << "Calculating area of the shape." << endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void area() const override {
        cout << "Area of Circle: " << M_PI * radius * radius << endl;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    void area() const override {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    void area() const override {
        cout << "Area of Triangle: " << 0.5 * base * height << endl;
    }
};

int main() {
    Shape* shape; // Base class pointer

    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    Triangle triangle(3.0, 7.0);

    // Polymorphism in action
    shape = &circle;
    shape->area(); // Calls Circle's area()

    shape = &rectangle;
    shape->area(); // Calls Rectangle's area()

    shape = &triangle;
    shape->area(); // Calls Triangle's area()

    return 0;
}
