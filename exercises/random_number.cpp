/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/


#include <iostream>
using namespace std;

int main() {
    int randomNumber = (5 * 7 + 3) % 10; // una piccola formula
    cout << "The random number is: " << randomNumber << endl;
    return 0;
}
