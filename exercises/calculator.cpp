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


double get(){
	double val;
	cout << "\nInsert Value " << endl;
	cin >> val;
	return val;
}
int main(){

	double x = get();
	double y = get();

	if (y != 0 ) {
		cout << "\n Div = " << (double)x/y << endl;
	} else {
		cout << "\n Non è possibile dividere per 0" << endl;
	}

	cout << "\n Sum = " << x + y << endl << "\n Diff = " << x - y << endl << "\n Mult = " << x * y << endl;
	return 0;
}
