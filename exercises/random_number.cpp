/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/

#include <iostream>
using namespace std;

#define EXIT_SUCCESS 0

int main(){

  double x = rand();

  cout << "The random number is: " << x << endl;
  return EXIT_SUCCESS;
}