/* Surprise me. */

#include <iostream>
#include <limits>
using namespace std;

template <class Type>
Type insert_and_control(Type data) //cin control (there isn't much that I can do to surprise you (without writing some crazy random code), so there you go)
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
  int month;

  /* Input month number from user */
  do
  {
    cout << "Enter month number(1-12): " << endl;
    month = insert_and_control(month);
    switch (month)
    {
    case 1:
      cout << "31 days" << endl;
      break;
    case 2:
      cout << "28/29 days" << endl;
      break;
    case 3:
      cout << "31 days" << endl;
      break;
    case 4:
      cout << "30 days" << endl;
      break;
    case 5:
      cout << "31 days" << endl;
      break;
    case 6:
      cout << "30 days" << endl;
      break;
    case 7:
      cout << "31 days" << endl;
      break;
    case 8:
      cout << "31 days" << endl;
      break;
    case 9:
      cout << "30 days" << endl;
      break;
    case 10:
      cout << "31 days" << endl;
      break;
    case 11:
      cout << "30 days" << endl;
      break;
    case 12:
      cout << "31 days" << endl;
      break;
    default:
      cerr << "Invalid input! Please enter month number between 1-12! \n" << endl;
      continue;
    }
    break;
  } while (true);

  return 0;
}