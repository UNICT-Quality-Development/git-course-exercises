/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/
#include <iostream>
using namespace std;

void getNumInput(int* num){
  cout << "Insert the first number: " << endl;
  cin >> num[0];
  cout << "Insert the second number: " << endl;
  cin >> num[1];
}

int main(){
  int number[2];
  getNumInput(number);

  cout << "Sum: " << number[0] + number[1] << endl;
}