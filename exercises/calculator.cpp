#include <iostream>

int main() {
    double num1, num2; // Uso double per permettere divisione decimale
    std::cout << "Insert first number: ";
    std::cin >> num1;
    std::cout << "Insert second number: ";
    std::cin >> num2;

    std::cout << "\nSUM: " << (num1 + num2) << std::endl;
    std::cout << "Difference: " << (num1 - num2) << std::endl;
    std::cout << "Multiplication: " << (num1 * num2) << std::endl;

    if (num2 != 0) {
        std::cout << "Division: " << (num1 / num2) << std::endl;
    } else {
        std::cout << "Division: Undefined (division by zero)" << std::endl;
    }

    return 0;
}

