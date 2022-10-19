/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>
using namespace std;

#define EXIT_SUCCESS 0

double sum(double a, double b){
  return a+b;
}

int main(){
  double x, y;

  cout<<"Insert the first number: ";
  cin>>x;

  cout<<"Insert the second number: ";
  cin>>y;

  cout<<"Sum: "<<sum(x, y)<<endl;
  return EXIT_SUCCESS;
}