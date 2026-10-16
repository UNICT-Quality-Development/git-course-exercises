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


/** Displays a prompt asking a number, returns user prompted number  */
double read_number(const char * prompt) {
  double result;
  for(;;) {
    std::cout << prompt;
    std::cin >> result;

    // If user prompts garbage, ask again.
    if ( std::cin.fail() ) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    else break;
    
  }
  return result;
}

int main( void ) {
  double a,b;
  
  a = read_number("Insert first number: ");
  b = read_number("Insert second number: ");

  double sum, diff, mult;

  sum = a + b;
  diff = a - b;
  mult = a * b;
  
  std::cout << "SUM: " << sum << std::endl
            << "Difference: " << diff << std::endl
            << "Multiplication: " << mult << std::endl;
  if ( b != 0.0 ) {
    double div = a / b;
    std::cout << "Division: "<< div << std::endl;
  }
  else {
    std::cout << "Division: by zero, can't do" << std::endl;
  }

  return 0;
}