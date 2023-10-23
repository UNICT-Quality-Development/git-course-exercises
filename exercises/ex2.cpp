/*
 Improve this program replacing if/else if with an array.

 Hint:  arr[3] = "Thursday";
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  unsigned int week;

  cout << "Enter week number(1-7): " << endl;
  cin >> week;

  string WeekDays[8] = {"Monday", "Tuesday", "Wednesday", "Thursday",
                        "Friday", "Saturday", "Sunday", "Invalid input! Please enter week number between 1-7."};

  unsigned int choice = min(week - 1, 7u);
  cout << WeekDays[choice] << endl;

  return EXIT_SUCCESS;
}