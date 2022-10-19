/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>
using namespace std;

double sum(double a, double b){
  return a+b;
}

int main(){
  double x, y;

  cout<<"Insert first number: ";
  cin>>x;

  cout<<"Insert second number: ";
  cin>>y;

  cout<<"La somma dei due numeri e': "<<sum(x, y)<<endl;
  return 0;
}