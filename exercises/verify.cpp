/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
using namespace std;

int main()
{
  int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
  int number;
  cout << "Inserisci numero: ";
  cin >> number;
  bool found = false;
  for (int i = 0; i < 10; i++)
  {
    if (N[i] == number)
    {
      found = true;
      break;
    }
  }
  if (found)
  {
    cout << "Il numero " << number << " è presente nell'array." << endl;
  }
  else
  {
    cout << "Il numero " << number << " non è presente nell'array." << endl;
  }
  return 0;
}
