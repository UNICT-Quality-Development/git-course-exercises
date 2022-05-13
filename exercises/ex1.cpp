/* Improve this program using a switch-case. */

#include <iostream>
using namespace std;

/* Input week number from user */
int input()
{
  int week_number;
  cout << "Enter week number(1-7): ";
  cin >> week_number;
  return week_number;
}

void print_day(int week_number)
{
  string day;
  switch (week_number)
  {
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
    day = "Invalid input! Please enter week number between 1-7.";
    break;
  }
  cout << day << endl;
}

int main()
{
  int week = input();
  print_day(week);

  return 0;
}