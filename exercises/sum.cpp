/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include<iostream>

using namespace std;

int main(){

  double a;
  double b;

  cout<<"Dimmi due numeri: " << endl;
  cin>>a;
  cin>>b;

  double sum = a+b;

  cout<<"La somma e': " << sum << endl;
}