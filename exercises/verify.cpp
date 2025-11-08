/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
using namespace std;

bool isPresent(int* Arr, const size_t& size, const int& n);
void printOutput(bool present);

bool isPresent(int* Arr, const size_t& size, const int& n){
  for(size_t i = 0; i < size ; i++){
    if(Arr[i] == n){
      return true;// FOUND!!
    }
  }
  return false;
}

void printOutput(bool present){
  cout << "The number is ";
  if(!present){ //not present
    cout << "not ";
  }
  cout << "present in the array." << endl;
}

int main()
{
  int N[] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
  size_t arrSize = 10;
  int numInput;

  cout << "Insert number: " << endl;
  cin >> numInput;

  printOutput( isPresent( N , arrSize , numInput) );

  return 0;
}
