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

int Sum(int a, int b){
  return a+b;
}
int Diff(int a, int b){
  return a-b;
}
int Mult(int a, int b){
  return a*b;
}
int Div(int a, int b){
  return a/b;
}

int main(){
  int n1, n2;
  cout << "Insert first number: " << endl;
  cin >> n1;
  
  cout << "Insert second number: " << endl;
  cin >> n2;

  cout << "SUM: " << Sum(n1,n2)
  << "\nDifference: " << Diff(n1,n2)
  << "\nMultiplication: " << Mult(n1,n2)
  << "\nDivision: " << Div(n1,n2) << endl;
}