/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>
using namespace std;

double sum(double n1, double n2){
	return n1 + n2;
}

double getNumber(){
	double n;
	cout << "Insert a number: ";
        cin >> n;
	return n;
}

int main(){
	double n1, n2;
	n1 = getNumber();
	n2 = getNumber();
	cout << "Sum: " << sum(n1,n2);
	return 0;
}
