/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>

int main(){
  int a, b;
  
  std::cout << "Insert the first number: ";
  std::cin >> a;

  std::cout << "Insert the second number: ";
  std::cin >> b;

  std::cout << "Sum: " << a + b << std::endl;

  return 0;
}