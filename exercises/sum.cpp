#include <iostream>

int main() {
  int num1, num2, sum = 0;

  std::cout << "Enter number 1: ";
  std::cin >> num1;
  std::cout << "Enter number 2: ";
  std::cin >> num2;

  sum = num1 + num2;

  std::cout << "Sum: " << sum << std::endl;

  return EXIT_SUCCESS;

}