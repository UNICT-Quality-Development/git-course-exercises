/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	char s[80];
	int a, b, SUM;
	
	printf("Insert two numers that will be summed\n" );
	
	fgets(s, sizeof(s), stdin);
	a = atoi(s);
	
	fgets(s, sizeof(s), stdin);
	b = atoi(s);
	
	SUM = a + b;
	

	printf("Insert the first number: %i \n" ,a );
	printf("Insert the second number: %i \n" ,b );
	printf("sum: %i \n" ,SUM );


	return 0;
}
// scanf(" %i", &a);

