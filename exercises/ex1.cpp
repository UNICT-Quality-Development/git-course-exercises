/* Improve this program using a switch-case. */

#include <iostream>
using namespace std;

int main()
{
  int week;

  /* Input week number from user */
  while(true){
    cout << "Enter week number(1-7): " << endl;
    cin >> week;
    if(week < 1 || week > 7)
      cerr << "Wrong week number, please insert a valid one (1-7)." << endl;
    else
      break;
  }

  switch(week){
    case 1:
      cout << "Monday";
      break;
    case 2:
      cout << "Tuesday";
      break;
    case 3:
      cout << "Wednesday";
      break;
    case 4:
      cout << "Thursday";
      break;
    case 5:
      cout << "Friday";
      break;
    case 6:
      cout << "Saturday";
      break;
    case 7:
      cout << "Sunday";
      break;
    default:
      cout << "Invalid input! Please enter week number between 1-7.";
      break;
  }
  cout << endl;

  return 0;
}