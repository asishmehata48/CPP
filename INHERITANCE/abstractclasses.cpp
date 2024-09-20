#include <iostream>
using namespace std;

// Abstract base class
class Animal {
public:
    virtual void sound() = 0;  // Pure virtual function
    void eat() {
        cout << "This animal is eating." << endl;
    }
};

// Derived class implementing the pure virtual function
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

// Derived class implementing the pure virtual function
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows." << endl;
    }
};

int main() {
    Animal* myDog = new Dog();
    myDog->sound();   // Calls Dog's sound function
    myDog->eat();     // Inherited eat function
    
    Animal* myCat = new Cat();
    myCat->sound();   // Calls Cat's sound function
    myCat->eat();     // Inherited eat function

    delete myDog;
    delete myCat;
    return 0;
}
