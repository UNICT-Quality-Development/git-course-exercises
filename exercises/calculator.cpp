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

void operation(int a, int b){
  cout << "SUM: " << a + b << endl;
  cout << "Difference: " << a - b << endl;
  cout << "Multiplication: " << a*b << endl;
  cout << "Divsion: "<< a/b << endl;
}

int main(){
  int a = 4;
  int b = 2;
  operation(a, b);
}