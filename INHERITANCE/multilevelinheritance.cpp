#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

// Intermediate derived class
class Mammal : public Animal {
public:
    void breathe() {
        cout << "This mammal breathes air." << endl;
    }
};

// Final derived class
class Dog : public Mammal {
public:
    void bark() {
        cout << "The dog barks." << endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat();    // Inherited from Animal
    myDog.breathe();// Inherited from Mammal
    myDog.bark();   // Specific to Dog
    return 0;
}
