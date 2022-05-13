/*
 Improve this program replacing if/else if with an array.

 Hint:  arr[3] = "Thursday";
*/

#include <iostream>
using namespace std;

int input()
{
  int week_number;
  cout << "Enter week number(1-7): ";
  cin >> week_number;
  return week_number;
}

void print_day(string week[], int week_day)
{
  string day;
  if (week_day >= 1 && week_day <= 7)
  {
    day = week[week_day];
  }
  else
  {
    day = "Invalid input! Please enter week number between 1-7.";
  }

  cout << day << endl;
}

int main()
{
  int week_number = input();
  string week[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

  print_day(week, week_number);
  return 0;
}