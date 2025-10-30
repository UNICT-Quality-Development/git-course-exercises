/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/

#include <iostream>
#include <cstdlib>

int numGenerator(){
  srand(time(NULL));
  return rand() % 100 + 1;
}

int main(){
  std::cout << "A random number between 1 and 100: " << numGenerator() << std::endl;
  return 0;
}