/* Surprise me. */

#include <iostream>
using namespace std;

enum months{
  January=1,
  February,
  March,
  April,
  May,
  June,
  July,
  August,
  September,
  October,
  November,
  December
};

int main()
{
  int month;

  /* Input month number from user */
  cout << "Enter month number(1-12): " << endl;
  cin >> month;

  switch (month)
  {
  case January:
  case March:
  case May:
  case July:
  case August:
  case October:
  case December:
    printf("31 days");
    break;
  case February:
    printf("28/29 days");
    break;
  case April:
  case June:
  case September:
  case November:
    printf("30 days");
    break;

  default:
    printf("Invalid input! Please enter month number between 1-12");
  }

  return 0;
}