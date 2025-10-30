/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <stdio.h>

int main(){
  int a, b;
  int somma;

  printf("inserisci due numeri da sommare: ");
  scanf("%d%d", &a, &b);

  somma = a + b;
  printf("la somma e': %d", somma);
}
