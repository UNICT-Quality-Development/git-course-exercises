/*
 Improve this program replacing if/else if with an array.

 Hint:  arr[3] = "Thursday";
*/

#include <iostream>
#include <string>

#define EXIT_SUCCESS 0

using namespace std;

int main()
{

  string week_days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
  int week_day;

  cout << "Enter week number(1-7): " << endl;
  cin >> week_day;
  
  if (week_day >= 1 && week_day <= 7) {
    cout << week_days[week_day-1] << endl;
  } else cout << "Invalid input! Please enter week number between 1-7." << endl;

  return EXIT_SUCCESS;;
}