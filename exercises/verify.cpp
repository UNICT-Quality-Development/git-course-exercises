/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
using namespace std;

bool isPresent(int N[], int size, int n) {
  for(int i = 0; i<size; i++)
    if(N[i] == n)
      return true;
  return false;
}

int main()
{
  // placeholder
  int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
  isPresent(N, 10, 3) ? cout << "The number 3 is present in the array." << endl : cout << "The number 3 is not present in the array." << endl;
  return 0;
}
