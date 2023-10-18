/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/

#define EXIT_SUCCESS 0

#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;

int get_random_number() {
  return rand();
}


int main(int argc, char *argv[]) {
  //set the seed for the randomness
  srand(time(NULL));
  int random_number = get_random_number();
  cout << "The random number is: " <<  random_number << endl;
  return EXIT_SUCCESS;
}
