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
#include <stdio.h>
#include <math.h>

int main(){
	
	int a, b, dif,sum ;
	
	
	a = 4;
	b = 2;
	
	sum = a+b;
	dif= a-b;
	
	printf("\n Insert first number:%i\n Insert first number:%i\n SUM: %i\n Difference: %i\n Multiplication: %i\n Division: %i\n", a, b, sum,  dif, a*b, a/b); 
	
	return 0;
}	
	