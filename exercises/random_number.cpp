/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/
#include <cstdlib>
#include <iostream>

#define EXIT_SUCCESS 0

using namespace std;

int main() {

  cout << "The random number id: " << rand() % 300;

  return EXIT_SUCCESS;
}