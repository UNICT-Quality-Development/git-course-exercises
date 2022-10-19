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

int sum(int n1, int n2){
  return n1+n2;
}
int difference(int n1, int n2){
  return n1-n2;
}
int multiplication(int n1, int n2){
  return n1*n2;
}
int division(int n1, int n2){
  return n1/n2;
}

int main(){
  int n1, n2;
  cout<<"Inserisci il primo numero: ";
  cin>>n1;
  cout<<"Inserisci il secondo numero: ";
  cin>>n2;
  cout<<"La somma tra i due numeri e': "<<sum(n1,n2)<<endl;
  cout<<"La differenza tra i due numeri e': "<<difference(n1,n2)<<endl;
  cout<<"La moltiplicazione tra i due numeri e': "<<multiplication(n1,n2)<<endl;
  cout<<"La divisione intera tra i due numeri e': "<<division(n1,n2)<<endl;
}