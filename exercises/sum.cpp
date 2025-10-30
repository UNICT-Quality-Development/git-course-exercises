/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <iostream>

void sum_two_numbers(){

    int a = 0;
    int b = 0;
    std::cout << "Inserisci un numero: \n";
    std::cin >> a;
    std::cout << "Inserisci un numero da sommare al primo \n";
    std::cin >> b;
    std::cout << a + b <<"\n";
}

int main(){
	sum_two_numbers();
	return 0;
}
