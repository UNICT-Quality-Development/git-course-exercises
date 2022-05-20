/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/
#include <iostream>
using namespace std;

int main(){
    double first, second;
    cout << "Insert two numbers to sum: ";
    cin >> first >> second;
    cout << first + second;
}