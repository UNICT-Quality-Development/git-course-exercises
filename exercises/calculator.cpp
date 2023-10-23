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

void FourOps(int x, int y)
{
  cout << "Sum: " << x + y << "\n";
  cout << "Difference: " << x - y << "\n";
  cout << "Multiplication: " << x * y << "\n";
  cout << "Division: " << x / y;
  return;
  }

int main()
{
  int first;
  int second;
  cout << "Insert first number: ";
  cin >> first;
  cout << "Insert second number: ";
  cin >> second;
  FourOps(first, second);
  return 0;
}