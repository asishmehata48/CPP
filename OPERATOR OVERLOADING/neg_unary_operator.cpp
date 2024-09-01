#include <iostream>
using namespace std;

class Point {
    private:
    int x, y;

    public:
    // Constructor
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    Point operator-() const {
        return Point(-x, -y);
    }

    void display() const {
        cout << "(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    Point p1(-7, 8);

    cout << "Original Point: ";
    p1.display();

    // Use the overloaded unary minus operator
    Point p2 = -p1;

    cout << "Negative Point: ";
    p2.display();

    return 0;
}