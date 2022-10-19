/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/

#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
  srand(time(NULL));

  cout << "The random number is: " << (rand() % 10);

  return 0;
}