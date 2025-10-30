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
  // placeholder
  int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};

  int number = 0;

  cout << "Insert number ";
  cin >> number;

  for (int i = 0; i < 10; i++)
  {
    if (N[i] == i)
    {
      cout << "The number " << number << "is present in the array.";
      return 1;
    }
  }

  cout << "The number " << number << " is not present in the array." << endl;
  return 0;
}
