/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/
#include <stdio.h>

int main(){
  printf("Ciao, inserisci i numeri da sommare:\n");
  double num1 = 0, num2 = 0;
  if (scanf("%lf %lf", &num1, &num2) == 2){
    printf("La somma dei numeri vale: %g\n", num1 + num2);
  }else{
    printf("Errore! non hai inserito dei numeri\n");
  }

}
