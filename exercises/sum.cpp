/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/
#include <iostream>
using namespace std;

int Sum (int a, int b){
  return a+b;
}

int main () {
  int input, sum=0;
  cout << "Insert the first number: " << endl;
  cin >> input;
  sum += input;
  cout << "Insert the second number: " << endl;
  cin >> input;
  cout << "Sum: " << Sum(sum, input) << endl;
}
