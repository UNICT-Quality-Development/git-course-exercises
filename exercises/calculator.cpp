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
  double num1 = 0, num2 = 0;

  cout << "Insert first number: ";
  cin >> num1;
  cout << "\nInsert second number: ";
  cin >> num2;
  cout << endl;

  cout << "SUM: " << num1 + num2;
  cout << "\nDifference: " << num1 - num2;
  cout << "\nMultiplication: " << num1 * num2 ;
  cout << "\nDivision: " << num1 / num2;

  return 0;
}

