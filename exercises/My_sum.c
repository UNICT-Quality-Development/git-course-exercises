/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <stdio.h>

int main () {

  int x;
  int y;
  
  printf("Insert the first number:\n");
  scanf("%d", &x );

  printf("Insert the second number:\n");
  scanf("%d", &y);

  int sum = x + y;

  printf("The sum of your number is: %d\n", sum);

}