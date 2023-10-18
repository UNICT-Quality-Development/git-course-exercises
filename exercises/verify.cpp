/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
#define EXIT_SUCCESS 0
using namespace std;

bool isPresent(int* arr, int dim, int num){
  for (int i = 0; i < dim; i++) if (arr[i] == num) return true;
  return false;
}

int main()
{
  // placeholder
  int N[10] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};
  int arr_length = sizeof(N)/sizeof(int);
  int input_number;

  cout << "Insert number ";
  cin >> input_number;

  cout << "The number " << input_number << " is" << ((isPresent(N, arr_length, input_number)) ? " " : " not ") << "present in the array." << endl;

  return EXIT_SUCCESS;
}
