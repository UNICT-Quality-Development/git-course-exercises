/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
nsert numberI 3
The number 3 is [not] present in the array.
*/

#include <iostream>
using namespace std;

int main() {
  int number;
  cout << "nsert numberI";
  cin >> number;

  // placeholder
  int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
  unsigned size = sizeof(N) / sizeof(int);
  bool is_valid = false;

  for (unsigned i = 0; i < size; i++)
    if (N[i] == number) {
      is_valid = true;
      break;
    }

  string control_str = is_valid ? "" : "not";
  
  cout << "The number" << number << "is" << control_str << "present in the array.";

  return 0;
}
