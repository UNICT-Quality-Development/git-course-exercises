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
  int num;
  bool isPresent = false;
  cout << "Insert number ";
  cin >> num;

  int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};

  for (int i = 0; i < 10; i++)
  {
    if (num == N[i])
    {
      isPresent = true;
      break;
    }
  }

  if (isPresent)
  {
    cout << "The number " << num << " is present";
  }
  else
  {
    cout << "The number " << num << " is NOT present";
  }
  return 0;
}
