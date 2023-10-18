/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char s[80];
	int a, b, SUM;
	fget(s, sizeof(s), stdin);
	a = atoi(s);

	fget(s, sizeof(s), stdin);
	b = atoi(s);

	SUM = a + b;

	printf("la somma è %i"\n, SUM);

	RETURN 0;
}

