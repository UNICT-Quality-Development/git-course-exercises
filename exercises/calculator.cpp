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

template<typename T>
void calculator(){
  T num1, num2;

  std::cout << "Enter the first number: ";
  std::cin >> num1;
  std::cout << "Enter the second number: ";
  std::cin >> num2;

  T sum = num1 + num2;
  T sub = num1 - num2;
  T multiply = num1 * num2;
  T divide = num1 / num2;
  std::cout << "The sum is " << sum << std::endl;
  std::cout << "The subtraction is " << sub << std::endl;
  std::cout << "The multiplication is " << multiply << std::endl;
  std::cout << "The division is " << divide << std::endl;

}

int main(){

  calculator<char>();

  return 0;
}