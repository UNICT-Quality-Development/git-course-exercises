/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/

#include <iostream>
#include <time.h>

using namespace std;

int main(){

  int x = 0;

  srand(time(NULL));
  x = rand() % 100; 

  cout << "Il numero generato in modo casuale e': " << x;

  return 0;
}

