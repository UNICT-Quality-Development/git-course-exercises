/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/
#include <iostream>
using namespace std;

int obtain_number(const string& position) {
  cout << "Insert the " << position << " number: ";
  int number;
  cin >> number;
  return number;
}
int main() {
  int num1, num2;
  cout << "Insert the first number: ";
  num1 = obtain_number("1");
  cout << "Insert the second number: ";
  num2 = obtain_number("2");
  cout << "Sum: " << num1 + num2 << endl;
  return EXIT_SUCCESS;
}