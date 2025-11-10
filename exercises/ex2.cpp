/*
 Improve this program replacing if/else if with an array.

 Hint:  arr[3] = "Thursday";
*/

#include <iostream>
using namespace std;

int main()
{
  int week;
  do{
    cout << "Enter week number(1-7): " << endl;
    cin >> week;
      if (week > 7 || week < 1){
        cout << "Invalid input! Please enter week number between 1-7." << endl;
      }
  } while(week > 7 || week < 1);
  week--;
  string arr[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
  cout << arr[week]<< endl;
  return 0;
}