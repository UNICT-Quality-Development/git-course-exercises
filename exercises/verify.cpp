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
  // placeholder
  int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
  int num;

  cout << "Insert a number: ";
  cin >> num;

  bool found = false;
  for(int i = 0; i < 10; i++){
     if(N[i] == num){
      found = true;
      break;
     }
  }

  cout << "The number " << num << ((found) ? " is":" is not") << " present in the array!" << endl;

  return 0;
}
