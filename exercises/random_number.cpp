/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/
#include <iostream>
#include <ctime>

#define EXIT_SUCCESS 0

using namespace std;

int main(){

  srand(time(NULL));
  int x = rand() % 20000;
  cout << "The random number is: "<< x <<endl;

  return EXIT_SUCCESS;
}


