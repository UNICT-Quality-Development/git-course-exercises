/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/
#include <stdio.h>

void decToBinary(int n) {
    if (n == 0) {
        printf("0");
        return;
    }

    int binary[32];
    int i = 0;

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
}

int main() {
    int num;
    printf("Insert first number: ");
    scanf("%d", &num);

    printf("The binary number is: ");
    decToBinary(num);
    printf("\n");

    return 0;
}