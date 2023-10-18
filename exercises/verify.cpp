/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>

using namespace std;

// check if the element exists in the array
bool isPresent(int *v, int n, int x) {
  int i = 0;
  while (i < n) {
    if (v[i] == x)
      return true;
    i++;
  }

  return false;
}

int main() {
  // init array
  int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};

  // user input
  int x;
  cout << "Insert a number to search in the array: ";
  cin >> x;

  // run check
  if (isPresent(N, 10, x))
    cout << "The element is present in the array";
  else
    cout << "The element is not present in the array";
  cout << endl;

  return 0;
}