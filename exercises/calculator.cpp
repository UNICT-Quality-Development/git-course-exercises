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

int main(){
	int x;
	int y;
	printf("\ninsert x and y: ");
	scanf("%d %d",&x,&y);
	
	printf("sum: %d   diff: %d  multiplct: %d   div: %d",(x+y), (x-y), (x*y), (x/y));
}
