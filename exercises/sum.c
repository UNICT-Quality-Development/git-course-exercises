/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include <stdio.h>
#include <stdlib.h>

int read(const char *prompt) {
    int num;
    printf("%s", prompt);
    scanf("%d", &num);
    return num;
}

int sum(int a, int b) {
    return a + b;
}

void print_result(int num1, int num2, int result) {
    printf("Sum: %d\n", result);
}

int main() {
    int x;
    int y;

    x = read("Insert the first number: ");
    y = read("Insert the second number: ");
    print_result(x, y, sum(x,y));

    return EXIT_SUCCESS;
}