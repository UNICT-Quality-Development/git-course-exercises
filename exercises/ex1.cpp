/* Improve this program using a switch-case. */

#include <iostream>
using namespace std;

void printDay(int day){
	switch(day){
	        case 1:
        	        cout << "Monday" << endl;
	                break;
	        case 2:
        	        cout << "Tuesday" << endl;
	                break;
	        case 3:
                	cout<< "Wednesday" << endl;
        	        break;
	        case 4:
        	        cout<< "Thursday" <<endl;
	                break;
	        case 5:
                	cout << "Friday" <<endl;
        	        break;
	        case 6:
	                cout << "Saturday" << endl;
	                break;
	        case 7:
                	cout << "Sunday" << endl;
        	        break;
	        default:
                	cout << "Invalid input! Please enter week number between 1-7." << endl;
        	        break;
  	}
}

int main()
{
  int week;

  /* Input week number from user */
  cout << "Enter week number(1-7): " << endl;
  cin >> week;

  printDay(week);

  return 0;
}
