/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/
#include <iostream>
using namespace std;

int main() {
	int x, y, s;
	cout << "Insert the first number: ";
	cin >> x;
	cout << "Insert the second number: ";
	cin >> y;
	s = x+y;
	cout << "Sum: " << s;
	return 0;
}
