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

  char arr[7][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
  if (week >= 1 && week <= 7)
  {
    cout << "The day is: " << arr[week - 1] << endl;
  }
  else
  {
    cout << "Invalid week number!" << endl;
  }

  return 0;
}