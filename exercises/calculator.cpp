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

int main() {
  int x, y;
  cout << "Insert first number: ";
  cin >> x;
  cout << "Insert second number: ";
  cin >> y;

  cout << "Sum: " << x + y;
  cout << "Difference: " << x - y;
  cout << "Multiplication: " << x * y;
  cout << "Division: " << x / y;

  return 0;
}
