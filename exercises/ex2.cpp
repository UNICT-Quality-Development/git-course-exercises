/*
 Improve this program replacing if/else if with an array.

 Hint:  arr[3] = "Thursday";
*/

#include <iostream>
using namespace std;

int main()
{
  int week;

  cout << "Enter week number(1-7): " << endl;
  cin >> week;

  string weeks[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };

  if ( week > 0 && week < 8 ){
    cout << weeks[week];
  }
  else
  {
    cout << "Invalid input! Please enter week number between 1-7." << endl;
  }

  return 0;
}