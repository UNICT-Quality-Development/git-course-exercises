/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>

#define EXIT_SUCCESS 0
#define EXIT_ERROR -1

using namespace std;

int main()
{

  int dim = 10;
  int number;

  cout << "What number are you searching for?\n> ";
  cin >> number;

  // placeholder
  int N[dim] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};

  for (int i=0; i<dim; i++) {
    if (N[i] == number) {
      cout << "The number " << number << " is present in the array" << endl;
      return EXIT_SUCCESS;
    }
  }

  cout << "The number " << number << " is not present in the array" << endl;
  return EXIT_ERROR;
}
