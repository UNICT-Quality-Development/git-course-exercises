/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <stdio.h>
int x;
int y;
int sum;

int main()
{
printf("Inserisci il primo numero da sommare: ");
scanf("%d", &x);

printf("Inserisci il secondo numero da sommare: ");
scanf("%d", &y);

printf("La somma di %d e %d è %d.\n", x,y, x+y);
}