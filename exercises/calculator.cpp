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
#include <string.h>

enum Operation {
  SUM,
  DIFF,
  MULTI,
  DIVISION,
  INVALID_OP
};

Operation parseOperation(const char *input) {
  if (strcmp(input, "sum") == 0) return SUM;
  if (strcmp(input, "diff") == 0) return DIFF;
  if (strcmp(input, "multi") == 0) return MULTI;
  if (strcmp(input, "division") == 0) return DIVISION;
  return INVALID_OP;
}

int getResult(int first, int second, Operation operation) {
  switch (operation) {
    case SUM: return first + second;
    case MULTI: return first * second;
    case DIVISION: return first / second;
    case DIFF: return first - second;
  default: return -999;
  }
}

int main() {
  int x, y;
  int result;
  char chosenOperation[8];
  Operation operation;

  printf("Inserisci il primo numero: ");
  scanf("%d", &x);

  printf("Inserisci il secondo numero: ");
  scanf("%d", &y);

  printf("Operazione da eseguire? \n (sum, diff, multi, division) ");
  scanf("%7s", &chosenOperation);

  operation = parseOperation(chosenOperation);
  result = getResult(x, y, operation);

  printf("Risultato ---> %d", result);
}