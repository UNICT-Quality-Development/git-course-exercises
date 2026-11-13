/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/

#include <iostream>
#include <random>

using namespace std;

int func_random (mt19937 generator) {
  uniform_int_distribution<int> distribution(1, 10);

  int random_number = distribution(generator);

  return random_number;
}

int main() {
  random_device seed;
  mt19937 generator(seed());

  cout << "The random number is: " << func_random(generator) << std::endl;

  return EXIT_SUCCESS;
}