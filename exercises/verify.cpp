/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>

#define EXIT_SUCCESS 0

using namespace std;

bool check_number (int* numbers, const int dim, const int number) {

  for (int i=0; i<dim; i++) {
    if (numbers[i] == number) {
      return true;
    }
  }
  return false;
}

int main() {

  int dim = 10;
  int number;

  cout << "What number are you searching for?\n> ";
  cin >> number;

  // placeholder
  int numbers[dim] = {3, 4, 5, 1, 2, 3, 4, 9, 13, 0};

  cout << "The number " << number << " is " << (check_number(numbers, dim, number) ? "" : "not ") << "present in the array" << endl;

  return EXIT_SUCCESS;
}
