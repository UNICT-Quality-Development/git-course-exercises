/* Surprise me. */

#include <stdio.h>

int main()
{
  int month;

  /* Input month number from user */
  printf("Enter month number(1-12): ");
  scanf("%d", &month);

  if ( month == 2 ) 
    printf("28/29 days");

  else if ( month % 2 == 1)
    printf("31 days");

  else if ( month % 2 == 0)
    printf("30 days");

  else
    printf("Invalid input! Please enter month number between 1-12");


  return 0;
}