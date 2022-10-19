/*
  Write a program that given two numbers as input make the main operations.

  Output:
  Insert first number: 4
  Insert second number: 2

  Sum: 6
  Difference: 2
  Multiplication: 8
  Division: 2
*/

#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

float x, y;

int main(int argc, char **argv){
	printf("First number: ");
	scanf("%f", &x);

	printf("Second number: ");
	scanf("%f", &y);

	printf("\n");
	printf("Sum: %.2f\n", x + y);
	printf("Difference: %.2f\n", x - y);
	printf("Multiplication: %.2f\n", x * y);
	printf("Division: %.2f\n", x / y);

	return 0;
}
