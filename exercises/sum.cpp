#include <iostream>
using namespace std;
/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

int main(){
  int x,y;

  
  cout << "Inserisci il primo numero: ";
  cin >> x;
  cin.get();

  cout << "Inserisci il secondo numero: ";
  cin >> y;
  
  cout << x + y;


}