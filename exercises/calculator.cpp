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

int main(void) {
	int a, b, sum, diff,mul, div;
	cout << "Insert first number:";
	cin >> a;
	cout << "Insert second number:";
	cin >> b;
	sum = a + b;
	diff = a - b;
	mul = a * b;
	div = a / b;
	cout << "Sum: " << sum << endl;
	cout << "Difference: " << diff << endl;
	cout << "Multiplication: " << mul << endl;
	cout << "Division: " << div << endl;
	return EXIT_SUCCESS;

}
