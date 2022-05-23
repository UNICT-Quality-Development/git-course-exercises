/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>
using namespace std;

int sum() {
  int x,y;
  cout<<"__Somma__"<<endl;
  cout<<"Insert the first number:\t";
  cin>>x;
  cout<<"Insert the second number:\t";
  cin>>y;
  return x+y;
}

int main () {
  cout<<sum();
}
