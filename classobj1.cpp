#include <iostream>

class Car {
public:
    std::string brand;
    std::string model;
    int year;

    void displayInfo() {
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Year: " << year << std::endl;
    }
};

int main() {
    Car car1;
    car1.brand = "Toyota";
    car1.model = "Corolla";
    car1.year = 2020;

    car1.displayInfo();

    return 0;
}
