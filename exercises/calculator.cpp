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
#include <stdlib.h>

int main(void){

float a, b, sum, dif, mult, div;

printf("insert first number: ");
scanf("%f", &a);
printf("insert second number: ");
scanf("%f", &b);

sum=a+b;
dif=a-b;
mult=a*b;
div=a/b;

printf("SUM: %.2f\nDifference: %.2f\nMultiplication: %.2f\nDivision: %.2f\n", sum, dif, mult, div);


exit(EXIT_SUCCESS);
}
