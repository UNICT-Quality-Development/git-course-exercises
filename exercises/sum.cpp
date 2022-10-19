/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <stdio.h>

int x, y;

int main(){
	printf("Insert the first number: ");
	scanf("%d", &x);

	printf("Insert the second number: ");
	scanf("%d", &y);

	printf("Sum: %d", x + y);
	return 0;
}
