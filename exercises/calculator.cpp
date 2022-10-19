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

int sum(int a, int b) {
    return a+b;
}

int difference(int a, int b) {
    return a-b;
}

int multiplication(int a, int b) {
    return a*b;
}

int division(int a, int b) {
    return a/b;
}

using namespace std;
int main() {
  int a, b;
  cout<<"Insert first number: ";
  cin>>a;
  cout<<"Insert second number: ";
  cin>>b;
  cout<<endl;
  
  cout<<"SUM: "<<sum(a, b)<<endl;
  cout<<"Difference: "<<difference(a, b)<<endl;
  cout<<"Multiplication: "<<multiplication(a, b)<<endl;
  cout<<"Division: "<<division(a, b)<<endl;
  return 0;
}