/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>

int main() {
  int first, second;
  
  std::cout << "Insert the first number: ";
  std::cin >> first;
  std::cout << "Insert the second number: ";
  std::cin >> second;
  
  std::cout << "Sum: " << first+second << std::endl;

  return 0;
}