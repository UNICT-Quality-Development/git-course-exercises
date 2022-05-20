/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/

#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

int main(){
    srand(time(NULL));
    cout << "The random number is: " << rand() % 101;
}