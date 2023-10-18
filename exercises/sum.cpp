/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>
#define EXIT_SUCCESS 0
int main(void) {

	int a, b;
	

	cout << "Insert the first number: ";
	cin >> a;
	cout << "Insert the second number: ";
	cin >> b;
	cout << "Sum: " << a + b;


	return EXIT_SUCCESS;


}