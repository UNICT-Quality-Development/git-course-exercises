/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#define DIM 10

#include <iostream>
using namespace std;

int main(){
  int x;
  cout << "Insert a number: ";
  cin >> x;

  // placeholder
  int N[DIM] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};

  bool present = false;

  for(int i = 0; i<DIM; i++){
    if(N[i] == x){
      present = true;
      break;
    }
  }

  if(present == true){
    cout << "The number " << x << " is present in the array." << endl;
  }
  else{
    cout << "The number " << x << " is [not] present in the array." << endl;
  }
  
  return 0;
}
