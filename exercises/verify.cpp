/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
using namespace std;
#define SIZE 10

bool verify(int A[], size_t size, int key){
  for(int i = 0; i<size; i++){
    if(A[i] == key) return true;
  }
  return false;
}

int main()
{
  // placeholder
  int N[SIZE] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
  int key;

  cout << "Enter key: ";
  cin >> key;

  if(verify(N, SIZE, key)){
    cout << key << " was found!" << endl;
  }
  else{
    cout << key << " wasn't found." << endl;
  }

  return 0;
}
