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
  printf("Ciao, inserisci i numeri da sommare:\n");
  double num1 = 0, num2 = 0;
  if (scanf("%lf %lf", &num1, &num2) == 2){
    printf("La somma vale: %g\n", num1 + num2);
    printf("La sottrazione vale: %g\n", num1 - num2);
    printf("La moltiplicazione vale: %g\n", num1 * num2);
    printf("La divisione vale: %g\n", num1 / num2);

  }else{
    printf("Errore! Non hai inserito dei numeri\n");
  }
  
}