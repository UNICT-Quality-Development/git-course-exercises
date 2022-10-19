/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/

#define MAX_BITS 32
#include <stdio.h>
#include <limits.h>

bool bits[MAX_BITS];

int main()
{
  int N;
  printf("Please enter a positive number below: ");
  scanf("%d", &N);

  if (N <= 0)
  {
    printf("Please enter a positive number below %d\n", INT_MAX);
    return 1;
  }

  int j = MAX_BITS - 1;

  while (N > 0)
  {
    bits[j--] = N % 2;
    N >>= 1;
  }

  for (int i = 0; i < MAX_BITS; i++)
    printf("%d", bits[i]);
  printf("\n");

  return 0;
}