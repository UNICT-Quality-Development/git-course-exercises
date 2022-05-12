/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
#define arraySize 10

using namespace std;

void requestInput(int *numberToBeVerified) {
  cout << "Insert number: ";
  cin >> *numberToBeVerified;
}

bool isForNumber(int *defaultArray, int numberToBeVerified) {
  for (int i = 0; i < arraySize; i++) {
    if (defaultArray[i] == numberToBeVerified) {
      return true;
    }
  }
  
  return false;
}

int main() {
  // placeholder
  int N[arraySize] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
  int verify;

  requestInput(&verify);

  cout << "The number " << verify << " is" << ((isForNumber(N, verify)) ? "" : " not") << " present in the array.\n";

  return 0;
}