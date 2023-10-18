/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>
using namespace std;

void main(void){
  int a, b;
  cout << "insert the first number:";
  cin >> a;
  cout << "insert the second number:";
  cin >> b;
  int sum = a +b;
  cout << "Sum: %d", sum;
}
