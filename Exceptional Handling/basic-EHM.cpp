#include <iostream>
#include <stdexcept>

int main() {
    try {
        int num1, num2;
        std::cout << "Enter two numbers: ";
        std::cin >> num1 >> num2;

        if (num2 == 0) {
            throw std::runtime_error("Division by zero is not allowed.");
        }

        std::cout << "Result: " << (num1 / num2) << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
