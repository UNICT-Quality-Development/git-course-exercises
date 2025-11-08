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

int main() {
    float num1, num2;

    printf("Insert first number: ");
    scanf("%f", &num1);

    printf("Insert second number: ");
    scanf("%f", &num2);

    printf("\nSUM: %.2f", num1 + num2);
    printf("\nDifference: %.2f", num1 - num2);
    printf("\nMultiplication: %.2f", num1 * num2);

    if (num2 != 0)
        printf("\nDivision: %.2f\n", num1 / num2);
    else
        printf("\nDivision: impossible (division by zero)\n");

    return 0;
}
