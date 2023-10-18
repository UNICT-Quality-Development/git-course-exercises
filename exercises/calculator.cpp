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
	int a, b, result;
	cout << "insert first number:";
	cin >> a;
	cout << "insert second number:";
	cin >> b;
	result=a+b;
	cout << "SUM: " << result;
	cout << "\n";
        result=a-b;
        cout << "Difference: " << result;
        cout << "\n";
        result=a*b;
        cout << "Multiplication: " << result;
        cout << "\n";
        result=a/b;
        cout << "Division: " << result;
        cout << "\n";
	return 0;
}

