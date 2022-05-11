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

int main(){

	int x,y;

	cout << "Insert First Number" << endl;
	cin >> x;

	cout << "Insert Second Number" << endl;
	cin >> y;

	int Sum = 0, Diff = 0, Mult = 0;
	double Div = 0.0;
	Sum = x + y;
	Diff = x - y;
	Mult = x * y;
	if(y != 0 ){
	Div = (double)x/(double)y;
	cout << "Div = " << Div;
	} else {
	cout << "Non è possibile dividere per 0" << endl;
	}
	cout << "Sum = " << Sum << endl << "Diff = " << Diff << endl << "Mult = " << Mult << endl;
}
