#include <iostream>

int main() {
    int score;
    std::cout << "Enter your score: ";
    std::cin >> score;

    if (score >= 90) {
        std::cout << "Grade: A" << std::endl;
    } else if (score >= 80) {
        std::cout << "Grade: B" << std::endl;
    } else {
        std::cout << "Grade: C or lower" << std::endl;
    }

    return 0;
}
