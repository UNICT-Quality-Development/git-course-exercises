/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;  

int main() {
    srand(time(0)); // Seed the random number generator
    int randomNumber = rand() % 10 + 1; // Generate a random number between 1 and 10
    cout << "The random number is: " << randomNumber << endl;
    return 0;
}
