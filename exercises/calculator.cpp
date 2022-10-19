/*
  Write a program that given two numbers as input make the main operations.

  Output:
  Insert first number: 4
  Insert second number: 2

  SUM: 6
  Difference: 2
  Multiplication: 8
  Division: 2
*/

#include <iostream>

using namespace std;

#define EXIT_SUCCESS 0

double sum(double x, double y) {
  return x + y;
}

double sub(double x, double y) {
  return x - y;
}

double mul(double x, double y) {
  return x * y;
}

double div(double x, double y) {
  return (x == 0 || y == 0) ? 0 : x / y;
}

int main() {
  double x, y;

  cout << "Insert the first number: ";
  cin >> x;

  cout << "Insert the second number: ";
  cin >> y;

  cout << "Sum: " << sum(x, y) << endl;
  cout << "Difference: " << sub(x, y) << endl;
  cout << "Multiplication: " << mul(x, y) << endl;
  cout << "Division: " << div(x, y) << endl;

  return EXIT_SUCCESS;
}