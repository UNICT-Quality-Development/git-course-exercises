/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/
/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;


int getRandom(){
  srand(time(NULL));
  return rand();
}

int main(){
  cout<< getRandom()<<endl;
  return 0;
}