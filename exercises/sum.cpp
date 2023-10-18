/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#define EXIT_SUCCESS 0

#include <iostream>

using namespace std;

int sum(int a, int b) {
  return a + b;
}

int main(int argc, char const *argv[]) {
  cout << sum(1, 2) << endl;
  return EXIT_SUCCESS;
}
