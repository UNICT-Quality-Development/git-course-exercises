/* Improve this program using a switch-case. */

#include <iostream>;
using namespace std;
#define EXIT_SUCCESS 0

int main()
{
  int day;

  /* Input week number from user */
  cout << "Scrivere giorno della settimana (lunedì=1, domenica=7):" << endl;
  cin >> day;

switch(day){ 
  case <day == 1> :
  
    cout << "Lunedì" << endl;
    break;

  case <day == 2>:
  
    cout << "Martedì" << endl;
    break;

  case <day == 3>:
  
    cout << "Mercoledì" << endl;
    break;

  case <day == 4>:
  
    cout << "Giovedì" << endl;
    break;
  
  case <day == 5>:
  
    cout << "Venerdì" << endl;
    break;
  
  case <day == 6>:
  
    cout << "Sabato" << endl;
    break;
  
  case <day == 7>:
  
    cout << "Domenica" << endl;
    break;

  default:

    cout << "Qualcosa è andato storto. Per favore, inserisci un numero compreso tra 1-7." << endl;
  
}
 
  return EXIT_SUCCESS;
}