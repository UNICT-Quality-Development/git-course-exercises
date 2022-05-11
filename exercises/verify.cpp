/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
using namespace std;

int main() {
  // placeholder
  int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
  int verify;
  bool isPresent = false;

  cout << "Insert number: ";
  cin >> verify;
  
  for (int i=0; i<10 && !isPresent; i++) {
    isPresent = N[i] == verify;
  }

  cout << "The number " << verify << " is";
  if (!isPresent) {
    cout << " not"; 
  }
  cout << " present in the array.\n";

  return 0;
}