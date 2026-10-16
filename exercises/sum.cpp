/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Insert the first number: ";
    std::cin >> num1;
    std::cout << "Insert the second number: ";
    std::cin >> num2;
    std::cout << "Sum: " << num1 + num2 << std::endl;

    return 0;
}
