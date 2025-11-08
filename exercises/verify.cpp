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

  return 0;

  cout << "Insert number: ";
  int num;
  cin >> num;
  bool found = false;
  for (int i = 0; i < 10; i++)
  {
    if (N[i] == num)
    {
      found = true;
    }
  }
  if (found)
  {
    cout << "The number " << num << " is present in the array." << endl;
  }
  else
  {
    cout << "The number " << num << " is not present in the array." << endl;
  }
  return 0;
}
