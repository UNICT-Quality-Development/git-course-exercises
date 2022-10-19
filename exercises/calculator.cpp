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

double sum(double n1,double n2){
  return n1+n2;
}

double diff(double n1,double n2){
  return n1-n2;
}

double molt(double n1,double n2){
  return n1*n2;
}

double div(double n1,double n2){
  return n1/n2;
}


int main(){
  double n1,n2;
  char op;
  cout << "Inserire il primo numero: ";
  cin >> n1;

  cout << "Inserire il secondo numero: ";
  cin >> n2;

  cout << "Scegliere l'operazione: [+,-,*,/]: ";
  cin >> op;

  switch (op){
    case '+':
      cout << "La somma e': " << sum(n1,n2);
      break;
    case '-':
      cout << "La differenza e': " << diff(n1,n2);
      break;
    case '*':
      cout << "Il prodotto e': " << molt(n1,n2);
      break;
    case '/':
      cout << "Il quoziente e': " << div(n1,n2);
      break;
  }

  return 0;
}