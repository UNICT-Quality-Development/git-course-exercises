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


#include<iostream>

using namespace std;

void insertNumber(int &a) {
	cout << "Insert number: ";
  	cin >> a;
  	cout << endl;
}

int main() {

  	int a, b;

  	// Inserting first number
  	insertNumber(a);

  	// Inserting second number
  	insertNumber(b);

  	cout << "Insert first number: " << a << "\n Insert second number: " << b << endl << endl;

  	cout << "sum: " << a + b << endl;
  	cout << "difference: " << a - b << endl;
  	cout << "multiplication: " << a * b << endl;

  	if (b!=0) {
    	cout << "division: " << a / b << endl;
  	} else {
    	
		do {
      		cout << "Impossible division by zero!\n Insert new divider: ";
      		cin >> b;
    	}while (b == 0);

    	cout << "division: " << a / b << endl;
  	}

  	return 0;
}
