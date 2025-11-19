/* Surprise me. */

#include <iostream>
using namespace std;

enum Months{
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

void printDays(int &month){
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

    case April:
    case June:
    case September:
    case November:
      cout << "30 days" << endl;
      break;

    case February:
      cout << "28-29 days" << endl;
      break;

    default:
      cout << "Invalid Input: Must be in (1,12)" << endl;
      break;
  }
}

int main()
{
  int month;

  /* Input month number from user */
  cout << "Enter month number (1-12)" << endl;
  cin >> month;

  printDays(month);

  return 0;
}
