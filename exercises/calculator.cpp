/* Write a program that given two numbers as input make the main operations.
  Output:
  Insert first number: 4
  Insert second number: 2

  SUM: 6
  Difference: 2
  Multiplication: 8
  Division: 2	*/

#include <iostream>
using namespace std;

double sum(double x, double y) {
	return x + y;
}

double diff(double x, double y) {
	return x - y;
}

double mul(double x, double y) {
	return x * y;
}

double div(double x, double y) {
	return x / y;
}

int main() {
	double x, y = 0;
	char op;
	cout << "Insert first number: " << endl;
	cin >> x;
	cout << "Insert second number: " << endl;
	cin >> y;
	do {
		cout << "Main operation: +, -, *, /" << endl;
		cin >> op;
	} while (op != '+' || op != '-' || op != '*' || op != '/') {
		cout << "Invalid operator" << endl;
		cin >> op;
	}

	return EXIT_SUCCESS;
}