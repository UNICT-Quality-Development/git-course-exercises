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
int main(){
  double n1, n2;
  cin >> n1 >> n2;
  cout << "SUM: " << n1+n2 << endl;
  cout << "Diff: " << n1-n2 << endl;
  cout << "Prod: " << n1*n2 << endl;
  cout << "Div: " << n1/n2;   
}
