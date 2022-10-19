/* Surprise me. */

#include <iostream>

using namespace std;

int main()
{
  int month;

  /* Input month number from user */
  cout << "Enter month number(1-12): ";
  cin >> month;

  if (month == 2) {
    cout << "28/29 days";
    return 0;
  }

  if (month >=1 && month <= 7) {
    if (month % 2 == 1) cout << "31 days";
    else cout << "30 days";

  } else if (month >=8 && month <= 12) {
    if (month % 2 == 0) cout << "31 days";
    else cout << "30 days";
    
  } else {
    cout << "Invalid input! Please enter month number between 1-12";
  }

  return 0;
}