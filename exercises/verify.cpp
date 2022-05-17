/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
using namespace std;

bool isThere(int* arr, int val, int N){
      for(int i = 0; i < N; i++){
           if(arr[i] == val)
            return true; 
      } 

      return false;
}

int main()
{
  // placeholder
  int dim = 10;
  int N[dim] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
  int num;

  cout << "Insert a number: ";
  cin >> num;

  cout << "The number " << num << ( isThere(N,num,dim) ? " is" : " is not" ) 
       << " present in the array!" << endl;

  return 0;
}
