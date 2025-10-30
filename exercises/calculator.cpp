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
#define EXIT_SUCCESS 0

using namespace std;

int main(){

  double x, y;

  do{
  cout << "Inserisci due numeri: ";
  cin >> x >> y;
  }while(y == 0);

  cout << "SUM: " << x + y <<endl;
  cout << "Difference: " << x - y <<endl;
  cout << "Multiplication: " << x * y <<endl;
  cout << "Division: " << x / y <<endl;

  return EXIT_SUCCESS;
}
