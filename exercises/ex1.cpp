/* Improve this program using a switch-case. */

#include <iostream>
#include <string.h>
using namespace std;

string getDay(int w)
{
  switch (w)
  {
    case 1:
      return "Monday";
    case 2:
      return "Thuesday";
    case 3:
      return "Wednesday";
    case 4:
      return "Thursday";
    case 5:
      return "Friday";
    case 6: 
      return "Saturday";
    case 7: 
      return "Sunday";
    default:
      cout << "Invalid input! Please enter week number between 1-7." << endl;
      return "Err";
      break;
  }
}

int main()
{
  int week;
  string day;
  /* Input week number from user */
  do
  {
    cout << "Enter week number(1-7): " << endl;
    cin >> week;
  } while (week<1 || week > 7);

  cout<<getDay(week);
  return 0;
}