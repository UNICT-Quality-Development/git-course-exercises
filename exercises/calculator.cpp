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
#include <cstdlib>
using namespace std;

int main() {
  int num1, num2;
  cout << "Insert first number: ";
  cin >> num1;
  cout << "Insert second number: ";
  cin >> num2;

  cout << "\nSUM: " << (num1 + num2) << endl;
  cout << "Difference: " << (num1 - num2) << endl;
  cout << "Multiplication: " << (num1 * num2) << endl;
  if (num2 != 0) {
    cout << "Division: " << (num1 / num2) << endl;
  } else {
    cout << "Division: Undefined (cannot divide by zero)" << endl;
  }

  return EXIT_SUCCESS;
}