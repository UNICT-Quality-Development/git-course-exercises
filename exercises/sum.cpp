/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>

int main(){
  int num1, num2;

  std::cout << "Enter the first number: ";
  std::cin >> num1;
  std::cout << "Enter the second number: ";
  std::cin >> num2;
  
  int sum = num1 + num2;
  std::cout << "The sum is" << sum << std::endl;
}
