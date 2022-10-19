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

double sum(double a, double b){
  return a+b;
}

double difference(double a, double b){
  return a-b;
}

double moltiplication(double a, double b){
  return a*b;
}

double division(double a, double b){
  return a/b;
}

#include <iostream>
using namespace std;

int main(){
  double x, y;

  cout<<"Insert first number: ";
  cin>>x;

  cout<<"Insert second number: ";
  cin>>y;

  cout<<"SUM: "<<sum(x, y)<<endl;
  cout<<"Difference: "<<difference(x, y)<<endl;
  cout<<"Moltiplication: "<<moltiplication(x, y)<<endl;
  cout<<"Division: "<<division(x, y)<<endl;

  return 0;
}