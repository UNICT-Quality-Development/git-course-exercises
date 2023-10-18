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
int main()
{
  long long int a, b=0;
  std::cout << "Insert first number: ";
  std::cin >> a;
  std::cout << "Insert second number: ";
  std::cin >> b;
  std::cout << "SUM: " << a+b << std::endl 
  << "Difference: " << a-b << std::endl 
  << "Multiplication: " << a*b << std::endl 
  << "Divsion: " << a/b << std::endl;
}