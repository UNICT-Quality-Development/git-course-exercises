/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>

using namespace std;

void lettura(int numero){
  cin >> numero;
}

template <typename T> T sum(T x, T y){
  return x + y;
}



int main()
{
  int firstNumber, secondNumber;

  cout << "Insert the first number: ";
  lettura(firstNumber);

  cout << "Insert the second number: ";
  lettura(secondNumber);

  cout << "Sum: " << sum(firstNumber, secondNumber) << endl;

  return EXIT_SUCCESS;
}