/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/
#include <iostream>
#include <string>

using namespace std;

template <typename T>
T sum(T a, T b) {
  return a + b;
}

double input(string msg) {
  double number = 0;
  cout << msg;
  cin >> number;
  return number;
}

int main(){
  double a = input("Insert the first number: ");
  double b = input("Insert the second number: ");

  cout << "Sum: " << sum(a,b) << endl;

  return EXIT_SUCCESS;
}