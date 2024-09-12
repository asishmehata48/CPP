#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Constructor for Animal class
    Animal() {
        cout << "Animal constructor called!" << endl;
    }

    void makeSound() {
        cout << "Animal sound!" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Constructor for Dog class
    Dog() {
        cout << "Dog constructor called!" << endl;
    }

    void makeSound() {
        cout << "Bark! Bark!" << endl;
    }
};

int main() {
    Dog myDog; // Constructor invocation
    myDog.makeSound(); // Dog-specific function
    return 0;
}
