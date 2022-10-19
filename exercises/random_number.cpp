/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#define EXIT_SUCCESS 0

using namespace std;

int main()
{
  srand(time(NULL));
  cout << "The random number is: " << rand() << endl;

  return EXIT_SUCCESS;
}