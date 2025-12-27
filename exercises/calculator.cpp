/*
  Write a program that given two numbers as input make the main operations.

  Output:
  Insert first number: 4
  Insert second number: 2

  SUM: 6
  Difference: 2
  Multiplication: 8
  Division: 2
*/
#include <iostream>
#include <iomanip>

int main() {
    double num1, num2;

    std::cout << "Insert first number: ";
    std::cin >> num1;

    std::cout << "Insert second number: ";
    std::cin >> num2;

    std::cout << "SUM: " << num1 + num2 << std::endl;
    std::cout << "Difference: " << num1 - num2 << std::endl;
    std::cout << "Multiplication: " << num1 * num2 << std::endl;

    if (num2 != 0) {
        std::cout << "Division: " << std::fixed << std::setprecision(2) << num1 / num2 << std::endl;
    } else {
        std::cout << "Division: Cannot divide by zero" << std::endl;
    }

    return 0;
}

