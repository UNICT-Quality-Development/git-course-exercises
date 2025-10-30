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

int main()
{
  int num1, num2;

  cout << "Insert first number: ";
  cin >> num1;

  cout << "Insert second number: ";
  cin >> num2;

  int sum = num1 + num2;
  int diff = num1 - num2;
  int mul = num1 * num2;
  int div = num1 / num2;

  cout << "\nSum: " << sum << endl;
  cout << "Difference: " << diff << endl;
  cout << "Multiplication: " << mul << endl;
  cout << "Division: " << div << endl;
}