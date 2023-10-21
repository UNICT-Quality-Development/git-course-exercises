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
  int first;
  int second;
  cout << "Insert the first number: ";
  cin >> first;
  cout << "Insert the second number: ";
  cin >> second;
  cout << "SUM: " << first + second << "\n";
  cout << "Difference: " << first - second << "\n";
  cout << "Multiplication: " << first * second << "\n";
  cout << "Division: " << first / second;
  return 0;
}