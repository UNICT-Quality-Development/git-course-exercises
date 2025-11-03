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

template <typename T> void printSum(const T& n1, const T& n2){
  cout << "Sum: " << n1 + n2 << endl;
}

int main(){
  int number[2];
  getNumInput(number);
  printSum<int>(number[0],number[1]);
}