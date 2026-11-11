/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/

#include <iostream>
#include <random>

int main() {
  std::random_device seed;
  std::mt19937 generator(seed());
  std::uniform_int_distribution<int> distribution(1, 10);

  int random_number = distribution(generator);

  std::cout << "The random number is: " << random_number << std::endl;

  return 0;
}
