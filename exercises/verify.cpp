/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
#define EXIT_SUCCESS 0

using namespace std;

int main()
{
  // placeholder
  int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};

  int n;
  bool check = false;

  cout << "Inserire il numero da cercare all'interno dell'array: ";
  cin >> n;

  cout << "L'array predefinito e': [";

  for (int i=0; i<10; i++){
    if(N[i] == n)
      check=true;
    
    cout << N[i] << " ";
  }

  if(check)
    cout << "]\n Il numero inserito e' presente nell'array.";
  else
    cout << "]\n Il numero inserito non e' presente nell'array.";

  return EXIT_SUCCESS;
}
