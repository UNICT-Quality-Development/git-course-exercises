/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
using namespace std;

int main()
{
  int n;
  int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};

  cout << "Insert number ";
  cin >> n;

  for(int i=0; i < sizeof(N)/sizeof(int); i++){
    if(N[i] == n){
      cout << "The number " << n << " is present in the array." << endl;
      return 0;
    }
  }

  cout << "The number " << n << " is not present in the array." << endl;
  return 0;
  
}
