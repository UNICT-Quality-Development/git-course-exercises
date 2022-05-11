/*
 Improve this program replacing if/else if with an array.

 Hint:  arr[3] = "Thursday";
*/

#include <iostream>
using namespace std;

int main()
{
  int week;
  string weekdays[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
  cout << "Enter week number(1-7): " << endl;
  cin >> week;
  cout << weekdays[(week-1)%7];
  return 0;
}