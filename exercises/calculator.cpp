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
#include <limits>

/** Displays a prompt asking a number, returns user prompted number  */
double read_number(const char * prompt) {
  double result;
  do {
    // Clear eventual past errors
    if ( std::cin.fail() ) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cout << prompt;
    std::cin >> result;

  } while(std::cin.fail());
  return result;
}

int main( ) {
  double a,b;
  a = read_number("Insert first number: ");
  b = read_number("Insert second number: ");

  std::cout << "SUM: " << a + b << std::endl
            << "Difference: " << a - b << std::endl
            << "Multiplication: " << a * b << std::endl;
  if ( b != 0.0 ) {
    std::cout << "Division: "<< a / b << std::endl;
  }
  else {
    std::cout << "Division: by zero, can't do" << std::endl;
  }

  return EXIT_SUCCESS;
}