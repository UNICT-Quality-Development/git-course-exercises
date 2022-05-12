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

void print_operations(int a, int b)
{
  cout << "Sum: " << a + b << endl;
  cout << "Difference: " << a - b << endl;
  cout << "Multiplication: " << a * b << endl;
  cout << "Division: ";
  if (b == 0)
  {
    cout << "impossible" << endl;
  }
  else
  {
    cout << a / b << endl;
  }
}

int main()
{

  int a, b;
  cout << "Insert first number: ";
  cin >> a;
  cout << "Insert second number: ";
  cin >> b;

  print_operations(a, b);

  return 0;
}
