/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/

#include <iostream>
#include <cstdlib>

int main( ) {
  std::cout << "The random number is: " << std::rand() << std::endl;
  return EXIT_SUCCESS;
}