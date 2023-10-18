/*
 Improve this program replacing if/else if with an array.

 Hint:  arr[3] = "Thursday";
*/

#include <iostream>
using namespace std;

int main()
{
  string day[8] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Invalid input! Please enter week number between 1-7."};
  int week;

  cout << "Enter week number(1-7): " << endl;
  cin >> week;
  switch (week)
  {
  case 1:
    cout << "day: " << day[0] << endl;
    break;
  case 2:
    cout << "day: " << day[1] << endl;
    break;
  case 3:
    cout << "day: " << day[2] << endl;
    break;
  case 4:
    cout << "day: " << day[3] << endl;
    break;
  case 5:
    cout << "day: " << day[4] << endl;
    break;
  case 6:
    cout << "day: " << day[5] << endl;
    break;
  case 7:
    cout << "day: " << day[6] << endl;
    break;
  default:
    cout << "day: " << day[7] << endl;
    break;
  }

  return 0;
}