/*
 Improve this program replacing if/else if with an array.

 Hint:  arr[3] = "Thursday";
*/

#include <iostream>
#include <string>
#define EXIT_SUCCESS 0

using namespace std;

int main()
{
  string days[7] = {"Monday", "Tuesday", "Wednsday", "Thursday", "Friday", "Saturday", "Sunday"};
  int week;

  cout << "Enter week number(1-7): " << endl;
  cin >> week;

  if (week > 7 || week < 1) cout << "Invalid input! Please enter week number between 1-7." << endl;
  else cout << days[week - 1] << endl;

  return EXIT_SUCCESS;
}
