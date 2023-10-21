/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/

#include <iostream> 
using namespace std; 
  
int main() 
{ 
  int first;
  int binary[16]; 

  cout << "Insert the first number: ";
  cin >> first;
  int i = 0; 
  while (first > 0) {
    binary[i] = first % 2; 
    first = first / 2; 
    i++; 
  } 
  
  cout <<"The binary number is: "; 
  for (int j = i - 1; j >= 0; j--) 
    cout << binary[j]; 
  return 0; 
} 
