/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>

int main()
{
  // sum between two numbers, provided by user
  int num1, num2, sum;
  std::cout << "Insert the first number: ";
  std::cin >> num1;
  std::cout << "Insert the second number: ";
  std::cin >> num2;
  sum = num1 + num2;
  std::cout << "Sum: " << sum << std::endl;
  return 0;
}