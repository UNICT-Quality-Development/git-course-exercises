/* Improve this program using a switch-case. */

#include <iostream>
using namespace std;

int main()
{
  int week;
  string day = "";

  /* Input week number from user */
  cout << "Enter week number(1-7): " << endl;
  cin >> week;

  switch (week) {
    case 1:
      day = "Monday";
      break;
    case 2:
      day = "Tuesday";
      break;
    case 3:
      day = "Wednesday";
      break;
    case 4:
      day = "Thursday";
      break;
    case 5:
      day = "Friday";
      break;
    case 6:
      day = "Saturday";
      break;
    case 7:
      day = "Sunday";
      break;
    default:
      cout << "Invalid input! Please enter week number between 1-7." << endl;
  }

  if (day !== "")
  {
    cout << day << endl;
  }

  return 0;
}