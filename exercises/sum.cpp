/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/
#include <iostream>

using namespace std;

int main(){

  int x , y;
  cout << "Insert the first number" << endl;
  cin >> x;
  cout << "Insert the second number" << endl;
  cin >> y;

  cout <<"The sum of: " << x << " + " << y << " = " << x+y << endl; 

  return 0;
}
