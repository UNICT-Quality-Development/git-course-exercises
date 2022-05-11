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

int main(){
	double n1, n2;
	cout<<"Insert the first number: ";
	cin>>n1;
	cout<<"Insert the second number: ";
	cin>>n2;
	cout<<"Sum: "<<sum(n1,n2);
	return 0;
}
