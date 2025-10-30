/* Improve this program using a switch-case. */

#include <iostream>
#include <random>
using namespace std;

int main()
{
  int week;

  /* Input week number from user */
  cout << "Enter week number(1-7): " << endl;
  cin >> week;

  switch(week)
  {
    case 1:
      cout << "Monday" << endl;
      Lunedi();
      break;
    case 2:
      cout << "Tuesday" << endl;
      break;
    case 3:
      cout << "Wednesday" << endl;
      break;
    case 4:
      cout << "Thursday" << endl;
      break;
    case 5:
      cout << "Friday" << endl;
      break;
    case 6:
      cout << "Saturday" << endl;
      break;
    case 7:
      cout << "Sunday" << endl;
      break;
    default:
      cout << "Invalid input! Please enter week number between 1-7." << endl;
  }


  return 0;
}

void Lunedi(){
  int x = rand() % 10;

  cout << "Oggi è lunedi, il tuo numero random è: " << x << endl;
}

void Martedi(){
  int x = rand() % 10;

  cout << "Oggi è martedi, il tuo numero rando è: " << x << endl;
}

void Mercoledi(){
  int x = rand() % 10;

  cout << "Oggi è mercoledi, il tuo numero random è: " << x << endl;
}

void Giovedi(){
  int x = rand() % 10;

  cout << "Oggi è giovedi, il tuo numero random è: " << x << endl;
}

void Venerdi(){
  int x = rand() % 10;

  cout << "Oggi è venerdi, il tuo numero random è: " << x << endl;
}

void Sabato(){
  int x = rand() % 10;

  cout << "Oggi è sabato, il tuo numero random è: " << x << endl;
}

void Domenica(){
  int x = rand() % 10;

  cout << "Oggi è domenica, il tuo numero random è: " << x << endl;
}

