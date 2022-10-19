/* Improve this program using a switch-case. */

#include <iostream>
using namespace std;

int main()
{
  int day;

  /* Input week number from user */
  cout << "Scrivere giorno della settimana (lunedì=1, domenica=7):" << endl;
  cin >> day;

  if (day == 1)
  {
    cout << "Lunedì" << endl;
  }
  else if (day == 2)
  {
    cout << "Martedì" << endl;
  }
  else if day == 3)
  {
    cout << "Mercoledì" << endl;
  }
  else if (day == 4)
  {
    cout << "Giovedì" << endl;
  }
  else if (day == 5)
  {
    cout << "Venerdì" << endl;
  }
  else if (day == 6)
  {
    cout << "Sabato" << endl;
  }
  else if (day == 7)
  {
    cout << "Domenica" << endl;
  }
  else
  {
    cout << "Qualcosa è andato storto. Per favore, inserisci un numero compreso tra 1-7." << endl;
  }

  return 0;
}