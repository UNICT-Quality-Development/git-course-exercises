/*
  Write a program that given two numbers as input make the main operations.

  Output:
  Insert first number: 4
  Insert second number: 2

  SUM: 6
  Difference: 2
  Multiplication: 8
  Division: 2
*/
#include <iostream>
using namespace std;

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

void Calculate(const int& n1, const int& n2){
  cout << "SUM: " << n1 + n2 << endl;
  cout << "Difference: " << n1 - n2 << endl;
  cout << "Multiplication: " << n1 * n2 << endl;
  cout << "Division: " << n1 / n2 << endl;
}

int main(){
  int num1 , num2;
  cout << "Insert first number: ";
  cin >> num1;
  cout << "Insert second number: ";
  cin >> num2;

  Calculate( num1 , num2 );
  return EXIT_SUCCESS;
}
