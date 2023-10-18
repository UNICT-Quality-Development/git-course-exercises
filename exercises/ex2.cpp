/*
 Improve this program replacing if/else if with an array.

 Hint:  arr[3] = "Thursday";
*/

#include <iostream>
using namespace std;

int main()
{
  int week;
  string Arr[7] = {"Monday", "Tuesday", "Wednesday", "Thursday","Friday", "Saturday", "Sunday"};

  cout << "Enter week number(1-7): " << endl;
  cin >> week;
  week-=1;
  if(week <=6 && week >=0)
  {
    cout << Arr[week] << endl;
  }
  else
  {
    cout << "Invalid input! Please enter week number between 1-7." << endl;
    return -1;
  }

  return 0;
}