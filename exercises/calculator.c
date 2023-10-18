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
void my_scanf_d(int *x){
  scanf("%d",x);
  return;
}


int main(){
  int a=0,b=0;
  printf("insert one number\n");
  my_scanf_d(&a);
  printf("insert one other number\n");
  my_scanf_d(&b);
  printf("SUM:%d\n",a+b);
  printf("Difference:%d\n",a-b);
  printf("Moltiplication:%d\n",a*b);
  printf("Division: %f\n",(float)a/(float)b);
  return 0;
}