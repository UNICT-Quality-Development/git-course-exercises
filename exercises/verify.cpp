/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
using namespace std;

bool verify(int *N, int n, int val) {
  for( int i = 0; i < n; i++ ) {
    if( N[i] == val ) {
      return true;
    }
  }
  return false;
}

int main()
{
  // placeholder
  int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
  int val;
  cout << "Insert number : " ;
  cin >> val;

  if( verify(N, 10, val) ) {
    cout << "The number " << val << " is present in the array" << endl;
  }
  else
  {
    cout << "The number " << val << " is not present in the array" << endl;
  }

  return 0;
}
