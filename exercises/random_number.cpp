/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/


#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));
    int random_number = std::rand() % 10 + 1;
    std::cout << "The random number is: " << random_number << std::endl;
    return 0;
}