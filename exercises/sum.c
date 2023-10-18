/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/
#include <stdio.h>

int main(){
  //dec
  int a=0,b=0;
  printf("insert one number\n");
  scanf("%d",a);
  printf("insert one other number\n");
  scanf("%d",b);
  printf("Sum:%d",a+b);
  return 0;
}