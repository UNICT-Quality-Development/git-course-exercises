/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/
#include <iostream>
#include <ctime>

#define EXIT_SUCCESS 0

using namespace std;

int generateRandomN (int min, int max) {

  srand(time(NULL));
  int x = rand() % (max - min + 1) + min;
  return x;

}

int main(){

  int min, max, r;

  cout << "Insert min value: " << endl;
  cin >> min;
  cout << "Insert max value: " << endl;
  cin >> max;
  r = generateRandomN (min, max);

  cout << "The random number is: "<< r <<endl;

  return EXIT_SUCCESS;

}


