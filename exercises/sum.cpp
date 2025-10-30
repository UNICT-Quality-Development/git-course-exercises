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

	double x, y;
	
	cout << "Inserisci due numeri: " << endl;
	cin >> x;
	cin >> y;
	double somma = x + y;
	cout << "La somma dei due numeri è: " << somma << endl;

	return 0;
}
