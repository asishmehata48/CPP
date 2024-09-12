#include <iostream>

// First base class
class Animal {
public:
    // Constructor for Animal class
    Animal() {
        std::cout << "Animal constructor called!" << std::endl;
    }
};

// Second base class
class Mammal {
public:
    // Constructor for Mammal class
    Mammal() {
        std::cout << "Mammal constructor called!" << std::endl;
    }
};

// Derived class that inherits from both Animal and Mammal
class Dog : public Animal, public Mammal {
public:
    // Constructor for Dog class
    Dog() {
        std::cout << "Dog constructor called!" << std::endl;
    }
};

int main() {
    Dog myDog;  // Constructor invocation
    return 0;
}
