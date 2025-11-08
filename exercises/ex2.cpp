/*
 Improve this program replacing if/else if with an array.

 Hint:  arr[3] = "Thursday";
*/

#include <iostream>
using namespace std;

const string week[] = {"Monday", "Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

const int DAY_IN_WEEK = 7;

int main(){
  int weekDay;

  cout << "Enter weekDay number(1-7): " << endl;

  if(!(cin >> weekDay)){
    cerr << "Invalid input! Please enter week number between 1-7.";
    return EXIT_FAILURE;
  }

  if (weekDay == 0 || weekDay > DAY_IN_WEEK) {
    cerr << "Invalid input! Please enter week number between 1-7." << endl;
    return EXIT_FAILURE;
  }

  cout << week[weekDay-1] << endl;
  return EXIT_SUCCESS;
}