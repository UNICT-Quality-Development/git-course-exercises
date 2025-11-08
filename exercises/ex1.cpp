/* Improve this program using a switch-case. */

#include <iostream>
using namespace std;

int main()
{
  int week;

  /* Input week number from user */
  cout << "Enter week number(1-7): " << endl;
  cin >> week;

  switch (week)
  {
  case 1:
    cout << "Monday" << endl; /* code */
    break;
  case 2:
    cout << "Tuesday" << endl; /* code */
    break;
  case 3:
    cout << "Wednesday" << endl; /* code */
    break;
  case 4:
    cout << "Thursday" << endl; /* code */
    break;
  case 5:
    cout << "Friday" << endl; /* code */
    break;
  case 6:
    cout << "Saturday" << endl; /* code */
    break;
  case 7:
    cout << "Sunday" << endl; /* code */
    break;
  default:
    cout << "Invalid input! Please enter week number between 1-7." << endl;
    break;
  }


  return 0;
}