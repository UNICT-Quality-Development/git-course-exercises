/* Hint:  arr[3] = "Thursday"*/
#include <iostream>
using namespace std;

int main(){
  unsigned int week;

  cout << "Enter week number(1-7): " << endl;
  cin >> week;

  string arr[] = { "Monday","Tuesday", "Wednesday","Thursday", "Friday", "Saturday", "Sunday"};
  if (week < 8 && week > 0) {
	  cout << arr[week - 1] << endl;
  }
  else
	cout << "Invalid input! Please enter week number between 1-7." << endl;
  return 0;
}