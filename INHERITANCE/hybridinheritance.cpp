#include <iostream>
using namespace std;

// Base class 1
class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

// Base class 2
class Pet {
public:
    void stay() {
        cout << "The pet stays at home." << endl;
    }
};

// Derived class 1
class Mammal : public Animal {
public:
    void breathe() {
        cout << "This mammal breathes air." << endl;
    }
};

// Derived class 2
class Dog : public Mammal, public Pet {
public:
    void bark() {
        cout << "The dog barks." << endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat();    // Inherited from Animal
    myDog.breathe();// Inherited from Mammal
    myDog.stay();   // Inherited from Pet
    myDog.bark();   // Specific to Dog
    return 0;
}
