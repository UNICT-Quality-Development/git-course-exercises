/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/
#include <iostream>
#include <ctime>
using namespace std;

const int randGen(){
  srand(time(NULL));
  return rand();
}

int main(){
  int num = randGen();
  cout << "The random number is: " << num << endl;
  return 0;
}