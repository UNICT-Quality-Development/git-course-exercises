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
  return x / y;
}

int main() {
  double x, y;

  cout << "Insert the first number: ";
  cin >> x;

  cout << "Insert the second number: ";
  cin >> y;

  cout << "SUM: " << sum(x, y) << endl;
  cout << "Difference: " << sub(x, y) << endl;
  cout << "Multiplication: " << mul(x, y) << endl;
  cout << "Division: " << div(x, y) << endl;

  return 0;
}