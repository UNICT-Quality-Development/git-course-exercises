/* Improve this program using a switch-case. */

using namespace std;

int main()
{
  int week;

  /* Input week number from user */
  cout << "Enter week number(1-7): " << endl;
  cin >> week;

  if (week == 1)
  {
    cout << "Monday" << endl;
  }
  else if (week == 2)
  {
    cout << "Tuesday" << endl;
  }
  else if (week == 3)
  {
    cout << "Wednesday" << endl;
  }
  else if (week == 4)
  {
    cout << "Thursday" << endl;
  }
  else if (week == 5)
  {
    cout << "Friday" << endl;
  }
  else if (week == 6)
  {
    cout << "Saturday" << endl;
  }
  else if (week == 7)
  {
    cout << "Sunday" << endl;
  }
  else
  {
    cout << "Invalid input! Please enter week number between 1-7." << endl;
  }

  return 0;
}