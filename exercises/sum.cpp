/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/
#include <iostream>
using namespace std;

int sum(int, int);

int main() {
	int x=1, y=2;
	
	cout << x << " + " << y << " = " << sum(x,y) << endl;
	return 0; 
}

int sum(int a, int b) {
	return a + b;
}
