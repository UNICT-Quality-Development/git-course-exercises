/*
 Improve this program replacing if/else if with an array.

 Hint:  arr[3] = "Thursday";
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
  int week;

  cout << "Enter week number(1-7): " << endl;
  cin >> week;

  string WeekDays[8] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Invalid input! Please enter week number between 1-7."};

  if( week >= 1 && week <=7) {
    cout << WeekDays[ week -1 ];
  }
  else 
  {
    cout << WeekDays[7] << endl;
  }

  return 0;
}