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
  int a;
  int b;
  cout << "Enter first number: ";
  cin >> a;
  cout << "and second number: ";
  cin >> b;
  int sum = a+b;
  cout << "The sum is: " <<  sum << "\n";
}
