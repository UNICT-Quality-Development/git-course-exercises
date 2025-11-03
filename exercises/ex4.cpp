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
    cout << "31 days" << endl;
    break;
  case February:
    cout << "28/29 days" << endl;
    break;
  case April:
  case June:
  case September:
  case November:
    cout << "30 days" << endl;
    break;

  default:
    printf("Invalid input! Please enter month number between 1-12");
  }

  return 0;
}