/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/


#include <iostream>
#include <chrono>
#include <cstdlib>

int randomNumber();

int main() {
  unsigned int seed = static_cast<unsigned int>(
    std::chrono::steady_clock::now().time_since_epoch().count()
  );
  std::srand(seed);
  std::cout << "The random number is: " << randomNumber();
  return 0;
}

int randomNumber() {
  return std::rand() % 100;
}