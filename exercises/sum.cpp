/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>
using namespace std;

template <typename T> T sumFunc() {
    T firstNumber, secondNumber;
    cout << "Insert the first number: ";
    cin >> firstNumber;
    cout << "Insert the second number: ";
    cin >> secondNumber;
    cout << "Sum: " << firstNumber + secondNumber;
    return firstNumber + secondNumber;
} 


int main() {
    sumFunc<double>();
    return 0;
}