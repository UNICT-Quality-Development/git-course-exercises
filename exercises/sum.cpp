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

  int a, b, sum = 0;

  cout << "Inserisci il primo numero: ";
  cin >> a;
  cout << endl;

  cout << "Inserisci il secondo numero: ";
  cin >> b;
  cout << endl;
  
  sum = a + b;

  cout << "La somma tra i due numeri e': " << sum;

  return 0;
}
