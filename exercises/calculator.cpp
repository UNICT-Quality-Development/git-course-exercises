/*
  Write a program that given two numbers as input make the main operations.

  Output:
  Insert first number: 4
  Insert second number: 2

  SUM: 6
  Difference: 2
  Multiplication: 8
  Division: 2
*/
#include <iostream>
using namespace std;
int somma(int a, int b) {
    return a + b;
}
int sottrazione(int a, int b) {
    return a - b;
}
int moltiplicazione(int a, int b) {
    return a * b;
}
float divisione(int a, int b) {
    return static_cast<float>(a) / b;
}
int main(){

  int a, b;

  cout << "Inserisci il primo numero: ";
  cin >> a;
  cout << endl;

  cout << "Inserisci il secondo numero: ";
  cin >> b;
  cout << endl;

  cout << "La somma tra i due numeri e': " << somma(a, b) << endl;
  cout << "La differenza tra i due numeri e': " << sottrazione (a, b) << endl;
  cout << "La moltiplicazione tra i due numeri e': " << moltiplicazione(a, b) << endl;
  cout << "La divisione tra i due numeri e': " << divisione(a, b) << endl;

  return 0;
}
