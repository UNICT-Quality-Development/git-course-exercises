/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>

using namespace std;

int sum(int a, int b) {
  return a + b;
}

int main(){
  cout << "Insert the first number: ";
  int n1;
  cin >> n1;
  cout << "Insert the second number: ";
  int n2;
  cin >> n2;
  cout << "Sum: " << sum(n1, n2) << endl;
  return 0;
}
