/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/


#include <stdio.h>

int sum(int a, int b){
  return a+b;
}

int main(int argc, char const *argv[]){
  int a, b;
  printf("inserire due numeri:\n");
  scanf("%d", &a);
  scanf("%d", &b);
  printf("La somma restituira è: %d\n", sum(a,b));

  return 0;
}

