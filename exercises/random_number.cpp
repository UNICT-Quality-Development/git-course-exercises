/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/

#define EXIT_SUCCESS 0

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){

  srand(time(NULL));

  cout << "The random number is: " << rand() << endl;

  return EXIT_SUCCESS;
}