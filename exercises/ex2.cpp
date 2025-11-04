/*
 Improve this program replacing if/else if with an array.

 Hint:  arr[3] = "Thursday";
*/

#include <iostream>
using namespace std;

string arr[] = {"Monday", "Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

int main(){
  int week;

  cout << "Enter week number(1-7): " << endl;
  cin >> week;

  if (week < 8) cout << arr[week];
  else{
    cout << "Invalid input! Please enter week number between 1-7." << endl;
  }

  return 0;
}