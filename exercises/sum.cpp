/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>
#define EXIT_SUCCESS 0

using namespace std;

int main() {
  int a, b;
  cout << "Enter first number: ";
  cin >> a;
  cout << "and second number: ";
  cin >> b;
  int sum = a + b;
  cout << "The sum is: " <<  sum << "\n";

  return EXIT_SUCCESS;
}
