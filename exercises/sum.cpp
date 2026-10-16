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
  int a, b;
  cout << "Inserire primo numero: ";
  cin >> a;
  cout << "Inserire secondo numero: ";
  cin >> b;
  cout << "La somma e': " << a+b;
  return 0;
}
