#include <iostream>

class Animal {
public:
    void sound() {
        std::cout << "Some generic animal sound!" << std::endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        std::cout << "Woof Woof!" << std::endl;
    }
};

int main() {
    Dog dog;
    dog.sound();  // Output: Woof Woof!

    return 0;
}
