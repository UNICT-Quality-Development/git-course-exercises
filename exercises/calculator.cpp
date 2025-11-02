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

float sum(float x, float y){
  return x + y;
}

float dif(float x, float y){
  return x - y;
}

float prd(float x, float y){
  return x * y;
}

float rpp(float x, float y){
  return x / y;
}

int main(){
  cout << "Inserisci 2 valori:" << "\n";
  cout << "Valore 1 = ";
  float valUno;
  cin >> valUno;
  cout << "Valore 2 = ";
  float valDue;
  cin >> valDue;

  float resultS = sum(valUno, valDue);
  float resultD = dif(valUno, valDue);
  float resultP = prd(valUno, valDue);
  float resultR = rpp(valUno, valDue);

  cout << valUno << " + " << valDue << " = " << resultS << endl;
  cout << valUno << " - " << valDue << " = " << resultD << endl;
  cout << valUno << " * " << valDue << " = " << resultP << endl;
  cout << valUno << " / " << valDue << " = " << resultR << endl;

  return EXIT_SUCCESS;
}