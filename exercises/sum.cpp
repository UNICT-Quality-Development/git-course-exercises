/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include<iostream>
using namespace std;

int sum(int x, int y){
  return x + y;
}

int main(){
  int x, y;

  cout << "Insert the first number: ";
  cin >> x;

  cout << "Insert the second number: ";
  cin >> y;

  cout << "Sum: " << sum(x, y) << endl;
  
  return 0;
}
