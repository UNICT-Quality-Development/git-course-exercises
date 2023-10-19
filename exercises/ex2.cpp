/*
 Improve this program replacing if/else if with an array.

 Hint:  arr[3] = "Thursday";
*/

#define EXIT_SUCCESS 0

#include <iostream>
using namespace std;

int main()
{
  int day;
  cout << "Enter week number(1-7): ";
  cin >> day;

  string week[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

  if(day - 1 >= 0 && day - 1 <= 6){
    cout << week[day - 1] << endl;
  }
  else{
    cout << "Invalid input! Please enter week number between 1-7." << endl;
  }

  return EXIT_SUCCESS;
}
