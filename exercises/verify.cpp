/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/
#include <iostream>
#define EXIT_SUCCESS 0
#define DIM 10

using namespace std;

bool findNumber(int N[], int x){
  for(int i = 0; i < DIM; i++){
    if(x == N[i])
      return true;
  }
  return false;
}

int main()
{
  int x;
  int N[DIM] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};

  cout << "Insert a number: " << endl;
  cin >> x;
  
  bool found = findNumber(N, x);
  if(found)
    cout << "The number " << x << " is present in the array" << endl;
  else
    cout << "The number " << x << " is not present in the array" << endl;

  return EXIT_SUCCESS;
}