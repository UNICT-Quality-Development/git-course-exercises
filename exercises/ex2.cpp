/*
 Improve this program replacing if/else if with an array.

 Hint:  arr[3] = "Thursday";
*/

#include <iostream>
using namespace std;

void input(int &weekNumber)
{
  cout << "Enter week number(1-7): ";
  cin >> weekNumber;
}

void printDay(string week[], int weekDay)
{
  string day;
  if (weekDay >= 1 && weekDay <= 7)
  {
    day = week[weekDay];
  }
  else
  {
    day = "Invalid input! Please enter week number between 1-7.";
  }

  cout << day << endl;
}

int main()
{
  int weekNumber;
  input(weekNumber);
  string week[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

  printDay(week, weekNumber);
  return 0;
}