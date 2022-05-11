/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
using namespace std;

void requestInput(int *numberToBeVerified) {
  cout << "Insert number: ";
  cin >> *numberToBeVerified;
}

void lookForNumber(int *defaultArray, int numberToBeVerified) {
  for (int i=0; i<10; i++) {
    if (defaultArray[i] == numberToBeVerified) {
      return;
    }
  }
  cout << " not";
}

int main() {
  // placeholder
  int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
  int verify;

  requestInput(&verify);

  cout << "The number " << verify << " is";
  lookForNumber(N, verify);
  cout << " present in the array.\n";

  return 0;
}