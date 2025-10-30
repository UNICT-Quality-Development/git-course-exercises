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
  int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
  int num, i;
  bool var = false;
  cout << "Insert number ";
  cin >> num;
  for (i = 0; i < 10; i++){
   if (N[i] == num){
   cout << "The number " << num << " is present in the array." << endl;
      var = true;
	   break;
  }
  }
  if(var==false){
	     cout << "The number " << num << " is present NOT  the array." << endl;
	  
  }
  return 0;
}
