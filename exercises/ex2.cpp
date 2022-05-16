/*
 Improve this program replacing if/else if with an array.

 Hint:  arr[3] = "Thursday";
*/

#include <iostream>
#include <limits>
using namespace std;

template <class Type>
Type insert_and_control(Type& data) //cin control
{
  do
  {
    cin >> data;
    if (cin.fail())
    {
      cerr << "Insert a number!" << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    else
      break;
  } while (true);
  return data;
}

int main()
{
  int week;
  string arr[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
  cout << "Enter week number(1-7): " << endl;
  do
  {
    week = insert_and_control(week);
    if (week >= 1 && week <= 7)
    {
      cout << arr[week - 1] << endl;
      break;
    }
    else
      cout << "Invalid input! Please enter week number between 1-7.\n" << endl;
  } while (true);

  return 0;
}
