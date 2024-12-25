#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() { // Virtual function
        cout << "Animals make sounds." << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override { // Overriding the base class function
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows." << endl;
    }
};

int main() {
    Animal* animal; // Base class pointer

    Dog dog;
    Cat cat;

    animal = &dog;
    animal->sound(); // Calls Dog's sound()

    animal = &cat;
    animal->sound(); // Calls Cat's sound()

    return 0;
}
