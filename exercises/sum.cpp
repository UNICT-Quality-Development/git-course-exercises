/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/
#include <stdio.h>
#include <iostream>

int main(){
	int a = 0;
	int b = 0;
	int sum = 0;
	std::cout << "Inserisci un numero: \n";
	std::cin >> a;
	std::cout << "Inserisci un numero da sommare al primo \n";
	std::cin >> b;
	sum = a + b;
	std::cout << sum <<"\n";
	return 0;
}
