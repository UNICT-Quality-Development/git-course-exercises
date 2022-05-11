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

	if(y != 0 ){
		cout << "\nDiv = " << (double)x/y << endl;
	} else {
		cout << "\nNon è possibile dividere per 0" << endl;
	}

	cout << "\nSum = " << x + y << endl << "\nDiff = " << x - y << endl << "\nMult = " << x * y << endl;
}
