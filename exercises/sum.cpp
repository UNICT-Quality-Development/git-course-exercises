/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>
using namespace std;

double somma(double num1, double num2)
{
  return num1 + num2;
}

int main()
{
  double num1 = 0, num2 = 0;

  cout << "Insert the first number: ";
  cin >> num1;

  cout << "Insert the second number: ";
  cin >> num2;

  cout << "Sum: " << somma(num1, num2) << endl;

  return 0;
}
