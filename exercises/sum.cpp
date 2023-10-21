/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>

using namespace std; 
int main() 
{ 
  int primo;
  int secondo; 
  cout << "Insert the first number: ";
  cin >> primo;
  cout << "Insert the second number: ";
  cin >> secondo;
  cout << "Sum: " << primo + secondo; 
  return 0; 
}
