/*
 Improve this program replacing if/else if with an array.

 Hint:  arr[3] = "Thursday";
*/

#include <iostream>
using namespace std;

int main()
{
  char* weekDays[7] = {
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
    "Sunday"
  };

  int week;

  cout << "Enter week number(1-7): " << endl;
  cin >> week;

  if(week < 1 || week > 7)  
  {
    cout << "Invalid input! Please enter week number between 1-7." << endl;
  }
  else 
  {
    cout << weekDays[week - 1] << endl;
  }

  return 0;
}