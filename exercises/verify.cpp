/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
using namespace std;

#define DIM 10

bool check(int array[], int dim, int number)
{
  for (int i = 0; i < dim; i++)
  {
    if (array[i] == number)
    {
      return true;
    }
  }
  return false;
}

int main()
{
  // placeholder
  int N[DIM] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
  int number;

  cout << "Insert number: ";
  cin >> number;

  cout << "The number " << number << " is " << (check(N, DIM, number) ? "" : "not ") << "present in the array." << endl;

  return 0;
}