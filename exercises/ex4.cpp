/* Surprise me. */

#include <iostream>
#include <limits>
using namespace std;

template <class Type>
Type insert_and_control(Type &data) // cin control (there isn't much that I can do to surprise you (without writing some crazy random code), so there you go)
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
    else if (data > 12)
      cerr << "Months that go past 12 like 'undecember' or 'duodecember' don't exist in our calendars... yet. Insert a valid number." << endl;
    else if (data <= 0)
      cerr << "Are you trying to go back in time? Insert a valid number." << endl;
    else
      break;
  } while (true);
  return data;
}

int main()
{
  int month;

  /* Input month number from user */
  do
  {
    cout << "Enter month number(1-12): " << endl;
    month = insert_and_control(month);

    if (month == 2)
    {
      cout << "28/29 days" << endl;
      break;
    }

    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {

      cout << "30 days" << endl;
      break;
    }

    else
    {
      cout << "31 days" << endl;
      break;
    }
  } while (true);

  return 0;
}