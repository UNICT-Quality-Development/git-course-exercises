/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/


#define EXIT_SUCCESS 0
#include<iostream>

using namespace std;

int main(){
  
  cout << "Inserisci i due valori che vuoi sommare" << endl;
  
  double a,b;
  cin >> a >> b;

  cout << "La somma di " << a << " e " << b << " e\' uguale a " << a + b << endl;

  return EXIT_SUCCESS;
}