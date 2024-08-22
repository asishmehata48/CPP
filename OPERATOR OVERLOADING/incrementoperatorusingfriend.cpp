#include <iostream>
using namespace std;

class Counter {
private:
    int count;
public:
    Counter() : count(0) {}

    
    friend Counter& operator++(Counter&);

    // Friend function to overload the postfix increment operator
    friend Counter operator++(Counter&, int);

    int getCount() const {
        return count;
    }
};

// Prefix increment operator overloading using a friend function
Counter& operator++(Counter& c) {
    ++c.count;
    return c;
}

// Postfix increment operator overloading using a friend function
Counter operator++(Counter& c, int) {
    Counter temp = c;  // Save the current state
    c.count++;         // Increment the count
    return temp;       // Return the old state
}

int main() {
    Counter c1;

    ++c1;  // Calls the prefix increment operator
    cout << "After prefix increment: " << c1.getCount() << endl;

    c1++;  // Calls the postfix increment operator
    cout << "After postfix increment: " << c1.getCount() << endl;

    return 0;
}
