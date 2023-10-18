/* Surprise me. */
#include <stdio.h>
#include <string.h>
#define EXIT_SUCCESS 0

int main()
{
  int month;
  int monthDays[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
  /* Input month number from user */
  printf("Enter month number(1-12): ");
  scanf("%d", &month);
  if (month > 12 || month < 1) printf("Invalid input! Please enter month number between 1-12");
  else {
  char buff[5];
  (month == 2) ? sprintf(buff, "%d/%d", monthDays[month-1], monthDays[month-1] + 1) : sprintf(buff, "%d", monthDays[month - 1]);
  printf("%s days", buff);
  }

  return EXIT_SUCCESS;
}
