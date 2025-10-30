/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/
#include <iostream>
using namespace std;

double sum(double n1, double n2)
{
  return n1 + n2;
}

int main()
{
  double num1 = 0, num2 = 0;
  cout << "Inserire il numero 1: ";
  cin >> num1;
  cout << endl;
  cout << "Inserire il numero 2: ";
  cin >> num2;
  cout << endl;

  cout << "La somma tra " << num1 << " e " << num2 << " ammonta a " << sum(num1, num2) << endl;
}