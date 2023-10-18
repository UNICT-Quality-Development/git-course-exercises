/*
 Improve this program replacing if/else if with an array.

 Hint:  arr[3] = "Thursday";
*/

#include <iostream>
using namespace std;

int main()
{
  int week;

  while(true){
    cout << "Enter week number(1-7): " << endl;
    cin >> week;
    if(week < 1 || week > 7)
      cerr << "Wrong week number, please insert a valid one. (1-7)" << endl;
    else
      break;
  }

  string A[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

  cout << A[week-1];

  return 0;
}