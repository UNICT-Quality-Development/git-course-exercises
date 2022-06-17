/*
 Improve this program replacing if/else if with an array.

 Hint:  arr[3] = "Thursday";
*/

#include <iostream>
using namespace std;

int main()
{
  int week;
  string arr[8];
  
  arr[0]="Invalid input! Please enter week number between 1-7.";
  arr[1]="Monday";
  arr[2]="Tuesday";
  arr[3]="Wednesday";
  arr[4]="Thursday";
  arr[5]="Friday";
  arr[6]="Saturday";
  arr[7]="Sunday";
  
  do{
  	cout << "Enter week number(1-7): " << endl;
	cin >> week;
  }while(week>7 || week < 0);

  cout << arr[week] << endl;  
  
  return 0;
}
