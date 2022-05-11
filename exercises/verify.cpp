/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
#define DIM 10

using namespace std;

bool checkingArray(int key, int arr[], int length) {
  
  for(int i=0; i<length; i++) {
    if(arr[i] == key) {
      return true;
    }
  }
  return false;
}


int main() {
  // placeholder
  int N[DIM] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
  int num;

  cout << "Insert number: ";
  cin >> num;
  
  cout << "The number " << num << " is " << (checkingArray(num, N, DIM) ? "" : "not ") << "present in the array" << endl;
  return 0;
}