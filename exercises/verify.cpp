/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
#define EXIT_SUCCESS 0
using namespace std;

int main()
{
  // placeholder
  int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
  int number;
  bool flag= false;
  cout << "Insert number";
  cin >> number;
  for (int i = 0; i < 10; i++) {
	  if (N[i] == number){
		  flag = true;
		  break;
	  }
  }
  if (flag == true) {
	  cout << "The number %d is present in the array", number;
  }
  else {
	  cout << "The number %d is not present in the array", number;
  }


  return EXIT_SUCCESS;
}
