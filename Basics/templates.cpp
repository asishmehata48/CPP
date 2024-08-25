#include <iostream>

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    std::cout << "Sum of integers: " << add(5, 3) << std::endl;
    std::cout << "Sum of doubles: " << add(5.5, 3.3) << std::endl;

    return 0;
}
