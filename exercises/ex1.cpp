/* Improve this program using a switch-case. */

#include <iostream>
using namespace std;

int main()
{
  int week;

  do{
    /* Input week number from user */
    cout << "Enter week number(1-7): " << endl;
    cin >> week;

    switch (week) {

      case 1: 
        cout << "Monday" << endl;
        break;
      case 2:
        cout << "Tuesday" << endl;
        break;
      case 3: 
        cout << "Tuesday" << endl;
        break;
      case 4:
        cout << "Thursday" << endl;
        break;
      case 5: 
        cout << "Friday" << endl;
        break;
      case 6:
        cout << "Saturday" << endl;
        break;
      case 7: 
        cout << "Sunday" << endl;
        break;
      default:
        cout << "----------------------------\nInvalid input, please retry!" << endl;

    }

  } while(week > 7 || week < 1);

  return 0;
}