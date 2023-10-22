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
int main() {
  using std::cout;
  using std::cin;
  int first;
  int second;
  cout << "Insert first number: ";
  cin >> first;
  cout << "Insert second number: ";
  cin >> second;
  cout << "Sum: " << first + second << "\n";
  cout << "Difference: " << first - second << "\n";
  cout << "Multiplication: " << first * second << "\n";
  cout << "Division: " << first / second;
  return 0;
}