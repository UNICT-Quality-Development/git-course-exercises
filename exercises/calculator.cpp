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

int main(){
  cout << "Insert first number: ";
  double num1;
  cin >> num1;
  cout << "Insert second number: ";
  double num2;
  cin >> num2;

  cout << "SUM: " << num1 + num2 << endl;
  cout << "Difference: " << num1 - num2 << endl;
  cout << "Multiplication: " << num1 * num2 << endl;
  cout << "Division: " << num1 / num2 << endl;

  return 0;
}
